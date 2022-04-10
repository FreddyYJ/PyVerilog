`include "metron_tools.sv"

// Case statements are allowed to have fallthrough, though the SV syntax is
// a bit different.

module Module
(
  input logic clock,
  output logic[7:0] tock
);

  always_comb begin /*tock*/
    logic[7:0] result;

    case(my_reg)
      0, // can we stick comments in here?
      1,
      2:
        result = 10;
      3: begin
        result = 20;
      end
      default:
        result = 30;
    endcase
    tock = result;
  end

  task tick();
    my_reg <= my_reg + 1;
  endtask
  always_ff @(posedge clock) tick();


  logic[7:0] my_reg;
endmodule
