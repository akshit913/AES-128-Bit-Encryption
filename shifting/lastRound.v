`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:23:46 11/19/2017 
// Design Name: 
// Module Name:    lastRound 
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
module lastRound(
	input[127:0] keyInput,
	input[127:0] roundKey,
	output[127:0] singleOut
    );
   wire[127:0] subOut;
	wire[127:0] shiftOut;
	cipherSubstituition sub(keyInput,subOut);
	cipherShift shift(subOut,shiftOut);
	AddRound addRoundkey(shiftOut,roundKey,singleOut); 
	

endmodule
