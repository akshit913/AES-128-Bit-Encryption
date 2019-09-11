`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:07 11/19/2017 
// Design Name: 
// Module Name:    finalKey 
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
module finalKey(
	input[127:0] keyIn,
	input[127:0] xKey,
	output[127:0] keyOut
    );
wire[127:0] rKey1;
wire[127:0] rKey2;
wire[127:0] rKey3;
wire[127:0] rKey4;
wire[127:0] rKey5;
wire[127:0] rKey6;
wire[127:0] rKey7;
wire[127:0] rKey8;
wire[127:0] rKey9;
wire[127:0] rKey10;

tenRoundKey keyGen(keyIn,rKey1,rKey2,rKey3,rKey4,rKey5,rKey6,rKey7,rKey8,rKey9,rKey10);
cipherGenSingle cipherGen1(xKey,rkey1);
cipherGenSingle cipherGen2(rkey1,rkey2);
cipherGenSingle cipherGen3(rkey2,rkey3);
cipherGenSingle cipherGen4(rkey3,rkey4);
cipherGenSingle cipherGen5(rkey4,rkey5);
cipherGenSingle cipherGen6(rkey5,rkey6);
cipherGenSingle cipherGen7(rkey6,rkey7);
cipherGenSingle cipherGen8(rkey7,rkey8);
cipherGenSingle cipherGen9(rkey8,rkey9);
lastRound cipherGen10(rkey9,keyOut);

endmodule
