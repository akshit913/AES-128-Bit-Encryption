`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:26:59 11/02/2017 
// Design Name: 
// Module Name:    keygnCompile 
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
module keygnCompile(
	input[127:0] keyIn,
	output [127:0] key
    );
	 //assign keyIn = {8'h54,8'h68,8'h61,8'h74,8'h73,8'h20,8'h6D,8'h79,8'h20,8'h4B,8'h75,8'h6E,8'h67,8'h20,8'h46,8'h75};
wire[127:0] keyTemp;
wire[127:0] keyTemp2;

//reg[127:0] 
shifting firstKey(keyIn,keyTemp);
lookupsbox sbox1(keyTemp,keyTemp2);
rcon rcon1(keyIn,keyTemp2,key);
//reg[127:0] temp;n
//initial begin
//temp = key;
//$display("%h",key);
	//#5 $finish;
//end

endmodule
