module mem_sram #(
	parameter MEM_DEPTH = 64

)(
	input clk,
	input reset,

	input mem_valid,
	output reg  mem_ready,
	input [31:0] mem_addr,
	input [31:0] mem_wdata,
	input [3:0] mem_wstrb,

	output reg [31:0] mem_rdata
);

reg [31:0] mem [0:MEM_DEPTH-1];
wire [$clog2(MEM_DEPTH)-1:0]widx = mem_addr[$clog2(MEM_DEPTH)+1:2];

always @(posedge clk or posedge reset)begin
	if(reset) begin
		mem_ready <= 1'b0;
		mem_rdata <= 32'h0;

	end else begin
		mem_ready <= 1'b0;

		if(mem_valid && !mem_ready) begin
			if(|mem_wstrb)begin
				if(|mem_wstrb[0]) mem[widx][7:0] <=mem_wdata[7:0];
		       	        if(|mem_wstrb[1]) mem[widx][15:8] <=mem_wdata[15:8];
			        if(|mem_wstrb[2]) mem[widx][23:16] <=mem_wdata[23:16];
			        if(|mem_wstrb[3]) mem[widx][31:24] <=mem_wdata[31:24];
			        mem_ready <= 1'b1;
		end else begin
			mem_rdata  <= mem[widx];
			mem_ready  <= 1'b1;

		end
	end
end
end
endmodule




			        
	   






