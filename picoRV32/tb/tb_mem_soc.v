`timescale 1ns / 1ps

module tb_mem_soc;

    localparam CLK_PERIOD = 20;
    localparam UART_BIT_CYCLES = 434;

    localparam BAUD_HALF = 1_000_000_000 / 115200 / 2;
    localparam BAUD_FULL = 1_000_000_000 / 115200;

    localparam TIMEOUT_NS = 2_000_000_000;

    reg clk = 0;
    reg reset = 1;

    integer greeting_count = 0;
    integer line_count = 0;

    always #(CLK_PERIOD/2) clk = ~clk;

    initial begin
        $display("--------------------------------------------------");
        $display(" UART SoC Simulation Started");
        $display("--------------------------------------------------");
        repeat (10) @(posedge clk);
        reset = 0;
    end

    wire uart_tx_pin;
    reg uart_rx_pin = 1'b1;

    top u_dut (
        .clk     (clk),
        .reset   (reset),
        .uart_tx (uart_tx_pin),
        .uart_rx (uart_rx_pin)
    );

    initial begin
        $dumpfile("tb_picorv32.vcd");
        $dumpvars(0, tb_mem_soc);
    end

    initial begin
        #(TIMEOUT_NS);
        $display("[TB] ERROR: Simulation TIMEOUT");
        $finish;
    end

    reg [7:0] rx_fifo [0:255];
    integer rx_wr_ptr = 0;

    reg [7:0] mon_byte;
    integer bit_idx;

    reg [8*32-1:0] asm_line;
    integer asm_len;

    initial begin : uart_monitor
        asm_line = 0;
        asm_len = 0;

        @(negedge reset);

        $display("[TB] UART Monitor Started");
        $display("--------------------------------");

        forever begin
            @(negedge uart_tx_pin);
            #(BAUD_HALF);

            if (uart_tx_pin == 1'b0) begin
                mon_byte = 8'h00;

                for (bit_idx = 0; bit_idx < 8; bit_idx = bit_idx + 1) begin
                    #(BAUD_FULL);
                    mon_byte[bit_idx] = uart_tx_pin;
                end

                #(BAUD_FULL);

                rx_fifo[rx_wr_ptr & 255] = mon_byte;
                rx_wr_ptr = rx_wr_ptr + 1;

                if (mon_byte >= 8'h20 && mon_byte <= 8'h7E)
                    $display("[TB] RX byte: %c", mon_byte);

                if (mon_byte == "\n") begin
                    #1;

                    if (asm_len == 25) begin
                        if (asm_line[7:0] == "H") begin
                            greeting_count = greeting_count + 1;
                            $display("[TB] Greeting message count = %0d",
                                     greeting_count);
                        end
                    end

                    asm_line = 0;
                    asm_len = 0;
                    line_count = line_count + 1;
                end
                else if (asm_len < 32) begin
                    asm_line[8*asm_len +: 8] = mon_byte;
                    asm_len = asm_len + 1;
                end
            end
        end
    end

    initial begin : test_seq
        @(negedge reset);

        wait (greeting_count == 10);

        $display("============================================");
        $display(" 10 GREETING MESSAGES RECEIVED");
        $display(" UART OUTPUT VERIFIED");
        $display("============================================");

        $finish;
    end

endmodule

