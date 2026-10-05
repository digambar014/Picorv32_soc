`timescale 1ns / 1ps

module axi_decoder (

    // -------------------------------------------------------------------------
    // INPUT
    // -------------------------------------------------------------------------
    // addr
    // Address from the CPU or AXI master.
    // The decoder inspects this value to determine which device to access.
    input  [31:0] addr,

    // -------------------------------------------------------------------------
    // OUTPUT
    // -------------------------------------------------------------------------
    // sel
    // One-hot selection signal used by the interconnect.
    //
    // Bit mapping:
    //   sel[0] → ROM
    //   sel[1] → SRAM
    //   sel[2] → UART
    //
    // Only one bit should be high at a time.
    output reg [2:0] sel
);

    // -------------------------------------------------------------------------
    // Address Decode Logic
    // -------------------------------------------------------------------------
    //
    // This is **combinational logic** (always @(*)).
    // That means the output changes immediately when the address changes.
    //
    // We use `casez` instead of `case`.
    //
    // casez allows the use of **wildcards (?)**
    // which makes it easier to match address ranges.
    //
    // Example:
    // 32'h0000_???? means:
    //   upper 16 bits must be 0x0000
    //   lower 16 bits can be anything
    //
    // This matches the ROM address range.
    //

    always @(*) begin

        casez (addr)

            // -------------------------------------------------------------
            // ROM region
            // -------------------------------------------------------------
            // Address range:
            // 0x00000000 – 0x0000FFFF
            //
            // The upper 16 bits are fixed (0000),
            // while the lower 16 bits are ignored.
            32'h0000_????:  
                sel = 3'b001;   // select ROM

            // -------------------------------------------------------------
            // SRAM region
            // -------------------------------------------------------------
            // Address range:
            // 0x00010000 – 0x0001FFFF
            //
            // Upper bits = 0001
            // Lower bits can vary.
            32'h0001_????:  
                sel = 3'b010;   // select SRAM

            // -------------------------------------------------------------
            // UART peripheral region
            // -------------------------------------------------------------
            // Address range:
            // 0x10000000 – 0x1000000F
            //
            // UART registers occupy only 16 bytes.
            // The last hex digit is therefore ignored using '?'.
            32'h1000_000?:  
                sel = 3'b100;   // select UART

            // -------------------------------------------------------------
            // Default case
            // -------------------------------------------------------------
            // If the address does not match any defined region,
            // we route it to ROM.
            //
            // This is a safety measure.
            // Without a valid slave, the bus could stall.
            default:        
                sel = 3'b001;   // fall-through → ROM

        endcase
    end

endmodule
