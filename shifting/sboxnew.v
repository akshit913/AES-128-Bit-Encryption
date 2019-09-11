`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:30:33 10/31/2017 
// Design Name: 
// Module Name:    sboxnew 
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
module lookupsbox(
            input [127:0] a,
            output [127:0] y
            );
			//assign a = {8'h54,8'h68,8'h61,8'h74,8'h73,8'h20,8'h6D,8'h79,8'h20,8'h4B,8'h75,8'h6E,8'h67,8'h20,8'h46,8'h75};
        //initial begin
		  //a = {8'h54,8'h68,8'h61,8'h74,8'h73,8'h20,8'h6D,8'h79,8'h20,8'h4B,8'h75,8'h6E,8'h67,8'h20,8'h46,8'h75};
                                     
   
        //end												 // FOR SUBSTITUITING EVERY ELEMENT OF THE KEY_IN WITH THE VALUE OF SBOX...
        matrixx m1(a[7:0],y[7:0]);
        matrixx m2(a[15:8],y[15:8]);
        matrixx m3(a[23:16],y[23:16]);
        matrixx m4(a[31:24],y[31:24]);
		  assign y[127:32] = a[127:32];
        /*matrixx m5(a[39:32],y[39:32]);
        matrixx m6(a[47:40],y[47:40]);
        matrixx m7(a[55:48],y[55:48]);
        matrixx m8(a[63:56],y[63:56]);
        matrixx m9(a[71:64],y[71:64]);
        matrixx m10(a[79:72],y[79:72]);
        matrixx m11(a[87:80],y[87:80]);
        matrixx m12(a[95:88],y[95:88]);
        matrixx m13(a[103:96],y[103:96]);
        matrixx m14(a[111:104],y[111:104]);
        matrixx m15(a[119:112],y[119:112]);
        matrixx m16(a[127:120],y[127:120]);*/
		  /*initial begin
        $display("%h",y);
	#5 $finish;
     end*/
        endmodule
