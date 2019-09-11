`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:43:57 10/06/2017 
// Design Name: 
// Module Name:    trhexa 
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
module trhexa;
	reg[31:0] a;
	initial begin
	a = {8'h54,8'h22,8'h33,8'h22};
	$display("%h",a);
	#5 $finish;
	end

endmodule
