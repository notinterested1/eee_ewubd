module exp2_3 (input A, B, output S);
assign S = (~A & B) | (A & ~B);
endmodule