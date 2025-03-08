// Code your testbench here
module test1 ( );
reg A, B;
wire S;
// device under test (dut)
exp_module dut (
.A (A),
.B (B),
.S (S));
initial begin
A=0; B=0; #10; // 10 ns delay
A=0; B=1; #10;
A=1; B=0; #10;
A=1; B=1; #10;
end
initial begin
$dumpfile("dump.vcd");
$dumpvars;
end
endmodule