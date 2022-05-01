`include "metron_tools.sv"

// Submodule bindings should be placed immediately before the statement
// containing the call

module Submod
(
  input logic clock,
  input logic[7:0] tock_sum_a_a1,
  input logic[7:0] tock_sum_a_a2,
  input logic[7:0] tock_sum_b_b1,
  input logic[7:0] tock_sum_b_b2,
  output logic[7:0] tock_sum_a_ret,
  output logic[7:0] tock_sum_b_ret
);
/*public:*/

  function logic[7:0] tock_sum_a(logic[7:0] a1, logic[7:0] a2);  tock_sum_a = a1 + a2; endfuction
  always_comb tock_sum_a_ret = tock_sum_a(tock_sum_a_a1, tock_sum_a_a2);
  function logic[7:0] tock_sum_b(logic[7:0] b1, logic[7:0] b2);  tock_sum_b = b1 + b2; endfuction
  always_comb tock_sum_b_ret = tock_sum_b(tock_sum_b_b1, tock_sum_b_b2);
endmodule

module Module
(
  input logic clock,
  output logic[7:0] tock_bindings_ret
);
/*public:*/

  always_comb begin /*tock_bindings*/
    logic[7:0] result;

    logic[7:0] result;
    // Submod bindings should _not_ end up here.

    begin
      // Only sum_a's bindings should be here.
      submod_tock_sum_a_a1 = 1;
      submod_tock_sum_a_a2 = 2;
      if (submod_tock_sum_a_ret) begin
        // Only sum_b's bindings should be here.
        submod_tock_sum_b_b1 = 3;
        submod_tock_sum_b_b2 = 4;
        result = submod_tock_sum_b_ret;
      end
      else begin
        // Only sum_b's bindings should be here.
        submod_tock_sum_b_b1 = 5;
        submod_tock_sum_b_b2 = 6;
        result = submod_tock_sum_b_ret;
      end
    end

    tock_bindings_ret = result;
  end

  Submod submod(
    // Inputs
    .clock(clock),
    .tock_sum_a_a1(submod_tock_sum_a_a1),
    .tock_sum_a_a2(submod_tock_sum_a_a2),
    .tock_sum_b_b1(submod_tock_sum_b_b1),
    .tock_sum_b_b2(submod_tock_sum_b_b2),
    // Outputs
    .tock_sum_a_ret(submod_tock_sum_a_ret),
    .tock_sum_b_ret(submod_tock_sum_b_ret)
  );
  logic[7:0] submod_tock_sum_a_a1;
  logic[7:0] submod_tock_sum_a_a2;
  logic[7:0] submod_tock_sum_b_b1;
  logic[7:0] submod_tock_sum_b_b2;
  logic[7:0] submod_tock_sum_a_ret;
  logic[7:0] submod_tock_sum_b_ret;

endmodule

