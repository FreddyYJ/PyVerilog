`include "metron_tools.sv"

// Static const members become SV localparams

module Module
(
  input logic clock,
  output logic[6:0] my_reg
);

  localparam /*const*/ int my_val = 7;

  task tick();
    my_reg <= my_val;
  endtask
  always_ff @(posedge clock) tick();

endmodule
