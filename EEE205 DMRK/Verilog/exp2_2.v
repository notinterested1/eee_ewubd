module exp2_2 (input A, B, output reg S);
always @(A,B) begin
S = 0;
if(~A & B) S = 1;
if(A & ~B) S = 1;
end
endmodule