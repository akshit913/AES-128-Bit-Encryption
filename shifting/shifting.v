`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:41:26 10/05/2017 
// Design Name: 
// Module Name:    shifting 
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
module shifting(
	input[127:0] key,
	output reg[127:0] shift
);
	always@(key)
	begin
	shift[31:0] = {key[23:16],key[15:8],key[7:0],key[31:24]};
	shift[127:32] = key[127:32];
	end;
endmodule
