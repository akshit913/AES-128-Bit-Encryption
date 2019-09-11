`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:54 10/31/2017 
// Design Name: 
// Module Name:    rcon 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module rcon(
input[127:0] rin,
input [127:0] srin,
output reg[127:0] rout
);
reg[31:0] rtemp;
reg[31:0] w4;
reg[31:0] w5;
reg[31:0] w6;
reg[31:0] w7;
//reg[31:0] rcontemp;
//assign srin = {8'h54,8'h68,8'h61,8'h74,8'h73,8'h20,8'h6D,8'h79,8'h20,8'h4B,8'h75,8'h6E,8'hB7,8'h5A,8'h9D,8'h85};
//assign rin = {8'h54,8'h68,8'h61,8'h74,8'h73,8'h20,8'h6D,8'h79,8'h20,8'h4B,8'h75,8'h6E,8'h67,8'h20,8'h46,8'h75};
reg[7:0] value;
//initial begin
	always@(rin,srin)
	begin
	value[7:0] = 8'h01;
	rtemp[31:24] = srin[31:24]^value[7:0];
	rtemp[23:0]= srin[23:0];
	//w4
	w4[31:24] = rtemp[31:24]^rin[127:120];
	w4[23:16] = rtemp[23:16]^rin[119:112];
	w4[15:8] = rtemp[15:8]^rin[111:104];
	w4[7:0] = rtemp[7:0]^rin[103:96];
	//w5
	w5[31:24] = w4[31:24]^rin[95:88];
	w5[23:16] = w4[23:16]^rin[87:80];
	w5[15:8] = w4[15:8]^rin[79:72];
	w5[7:0] = w4[7:0]^rin[71:64];
	//w6
	w6[31:24] = w5[31:24]^rin[63:56];
	w6[23:16] = w5[23:16]^rin[55:48];	
	w6[15:8] = w5[15:8]^rin[47:40];
	w6[7:0] = w5[7:0]^rin[39:32];
	//w7
	w7[31:24] = w6[31:24]^rin[31:24];
	w7[23:16] = w6[23:16]^rin[23:16];	
	w7[15:8] = w6[15:8]^rin[15:8];
	w7[7:0] = w6[7:0]^rin[7:0];
	
	rout[127:96] = w4;
	rout[95:64] = w5;
	rout[63:32] = w6;
	rout[31:0] = w7;
	
	//rout[31:0]=rin[127
	/*$display("%h",w4);
	$display("%h",w5);
	$display("%h",w6);
	$display("%h",w7);
	#5 $finish;*/
	end
endmodule
