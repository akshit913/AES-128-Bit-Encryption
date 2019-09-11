`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:23:46 10/30/2017 
// Design Name: 
// Module Name:    substituition 
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
module substituition(
    input[7:0] element,
	 output reg[7:0] elOutn
    );
sbox s_box(
.address  (element),
.sbox    (elOut)
)

endmodule
