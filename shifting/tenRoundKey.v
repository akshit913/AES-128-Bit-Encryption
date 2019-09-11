`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:41:22 11/07/2017 
// Design Name: 
// Module Name:    tenRoundKey 
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
module tenRoundKey(
	input [127:0] key,
	output [127:0] key0,
	output [127:0] key1,
	output [127:0] key2,
	output [127:0] key3,
	output [127:0] key4,
	output [127:0] key5,
	output [127:0] key6,
	output [127:0] key7,
	output [127:0] key8,
	output [127:0] key9
    );
wire[127:0] con1;
wire[127:0] con2;
wire[127:0] con3;
wire[127:0] con4;
wire[127:0] con5;
wire[127:0] con6;
wire[127:0] con7;
wire[127:0] con8;
wire[127:0] con9;

assign key0 = key;
keygnCompile keygen1(key,con1);
assign key1 = con1;
keygnCompile keygen2(con1,con2);
assign key2 = con2;
keygnCompile keygen3(con2,con3);
assign key3 = con3;
keygnCompile keygen4(con3,con4);
assign key4 = con4;
keygnCompile keygen5(con4,con5);
assign key5 = con5;
keygnCompile keygen6(con5,con6);
assign key6 = con6;
keygnCompile keygen7(con6,con7);
assign key7 = con7;
keygnCompile keygen8(con7,con8);
assign key8 = con8;
keygnCompile keygen9(con8,con9);
assign key9 = con9;

endmodule
