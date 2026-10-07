
`timescale 1ns / 1ps

module top (
    input  clk,
    input  reset,
    output uart_tx,
    input  uart_rx
);
    (* keep *) wire        cpu_mem_valid;
    (* keep *) wire        cpu_mem_instr;
    (* keep *) wire        cpu_mem_ready;
    (* keep *) wire [31:0] cpu_mem_addr;
    (* keep *) wire [31:0] cpu_mem_wdata;
    (* keep *) wire [ 3:0] cpu_mem_wstrb;
    (* keep *) wire [31:0] cpu_mem_rdata;

    picorv32 #(
        .ENABLE_COUNTERS    (1),
        .ENABLE_COUNTERS64  (0),
        .ENABLE_REGS_16_31  (1),
        .ENABLE_REGS_DUALPORT (1),
        .TWO_STAGE_SHIFT    (1),
        .BARREL_SHIFTER     (0),
        .COMPRESSED_ISA     (0),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .ENABLE_PCPI        (0),
        .ENABLE_MUL         (0),
        .ENABLE_FAST_MUL    (0),
        .ENABLE_DIV         (0),
        .ENABLE_IRQ         (0),
        .ENABLE_TRACE       (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0001_00FC)
    ) u_cpu (
        .clk            (clk),
        .resetn         (~reset),
        .mem_valid      (cpu_mem_valid),
        .mem_instr      (cpu_mem_instr),
        .mem_ready      (cpu_mem_ready),
        .mem_addr       (cpu_mem_addr),
        .mem_wdata      (cpu_mem_wdata),
        .mem_wstrb      (cpu_mem_wstrb),
        .mem_rdata      (cpu_mem_rdata),
        .mem_la_read    (),
        .mem_la_write   (),
        .mem_la_addr    (),
        .mem_la_wdata   (),
        .mem_la_wstrb   (),
        .pcpi_valid     (),
        .pcpi_insn      (),
        .pcpi_rs1       (),
        .pcpi_rs2       (),
        .pcpi_wr        (1'b0),
        .pcpi_rd        (32'h0),
        .pcpi_wait      (1'b0),
        .pcpi_ready     (1'b0),
        .irq            (32'h0),
        .eoi            (),
        .trap           (),
        .trace_valid    (),
        .trace_data     ()
    );

    wire sel_rom  = cpu_mem_valid && (cpu_mem_addr[31:16] == 16'h0000);
    wire sel_sram = cpu_mem_valid && (cpu_mem_addr[31:16] == 16'h0001);
    wire sel_uart = cpu_mem_valid && (cpu_mem_addr[31:28] ==  4'h1);

    wire rom_valid  = sel_rom;
    wire sram_valid = sel_sram;
    wire uart_valid = sel_uart;

    wire        rom_ready;
    wire [31:0] rom_rdata;

    mem_rom #(
        .MEM_DEPTH (2048),
        .INIT_FILE ("rom.hex")
    ) u_rom (
        .clk       (clk),
        .reset     (reset),
        .mem_valid (rom_valid),
        .mem_ready (rom_ready),
        .mem_addr  (cpu_mem_addr),
        .mem_rdata (rom_rdata)
    );

    wire        sram_ready;
    wire [31:0] sram_rdata;

    mem_sram #(
        .MEM_DEPTH (64)
    ) u_sram (
        .clk       (clk),
        .reset     (reset),
        .mem_valid (sram_valid),
        .mem_ready (sram_ready),
        .mem_addr  (cpu_mem_addr),
        .mem_wdata (cpu_mem_wdata),
        .mem_wstrb (cpu_mem_wstrb),
        .mem_rdata (sram_rdata)
    );

    // UART — Slave 2 (memory-mapped, no AXI)
    wire        uart_ready;
    wire [31:0] uart_rdata;

    uart_mem #(
        .CLK_FREQ  (50_000_000),
        .BAUD_RATE (115_200)
    ) u_uart (
        .clk       (clk),
        .reset     (reset),
        .mem_valid (uart_valid),
        .mem_ready (uart_ready),
        .mem_addr  (cpu_mem_addr),
        .mem_wdata (cpu_mem_wdata),
        .mem_wstrb (cpu_mem_wstrb),
        .mem_rdata (uart_rdata),
        .uart_tx   (uart_tx),
        .uart_rx   (uart_rx)
    );

    assign cpu_mem_ready = rom_ready  | sram_ready | uart_ready;

    assign cpu_mem_rdata =
        sel_rom  ? rom_rdata  :
        sel_sram ? sram_rdata :
        sel_uart ? uart_rdata :
                   32'h0;

endmodule
