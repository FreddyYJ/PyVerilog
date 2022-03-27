// RISC-V SiMPLE SV -- single-cycle controller
// BSD 3-Clause License
// (c) 2017-2019, Arthur Matos, Marcus Vinicius Lamar, Universidade de Brasília,
//                Marek Materzok, University of Wrocław

`ifndef RVSIMPLE_SINGLECYCLE_CONTROL_H
`define RVSIMPLE_SINGLECYCLE_CONTROL_H

`include "config.sv"
`include "constants.sv"
`include "metron_tools.sv"

module singlecycle_control
(
  input logic clock,
  input logic[6:0] inst_opcode,
  input logic take_branch,
  output logic[1:0] alu_op_type,
  output logic data_mem_read_enable,
  output logic data_mem_write_enable,
  output logic[2:0] reg_writeback_select,
  output logic[1:0] next_pc_select,
  output logic pc_write_enable,
  output logic regfile_write_enable,
  output logic alu_operand_a_select,
  output logic alu_operand_b_select,
  output logic[1:0] alu_op_type2
);
 /*public:*/
  //logic<1> pc_write_enable;
  //logic<1> regfile_write_enable;
  //logic<1> alu_operand_a_select;
  //logic<1> alu_operand_b_select;
  /*logic<2> alu_op_type;*/
  /*logic<1> data_mem_read_enable;*/
  /*logic<1> data_mem_write_enable;*/
  /*logic<3> reg_writeback_select;*/
  /*logic<2> next_pc_select;*/

  always_comb begin : tock_next_pc_select
    import rv_constants::*;
    case (inst_opcode) 
      /*case*/ OPCODE_BRANCH: next_pc_select = take_branch ? CTL_PC_PC_IMM : CTL_PC_PC4; /*break;*/
      /*case*/ OPCODE_JALR:   next_pc_select = CTL_PC_RS1_IMM; /*break;*/
      /*case*/ OPCODE_JAL:    next_pc_select = CTL_PC_PC_IMM; /*break;*/
      default:            next_pc_select = CTL_PC_PC4; /*break;*/
    endcase
  end

  always_comb begin
    pc_write_enable = 1'b1;
  end

  always_comb begin
    import rv_constants::*;
    case (inst_opcode) 
      /*case*/ OPCODE_MISC_MEM: regfile_write_enable = 0;
      /*case*/ OPCODE_STORE:    regfile_write_enable = 0;
      /*case*/ OPCODE_BRANCH:   regfile_write_enable = 0;
      /*case*/ OPCODE_LOAD:     regfile_write_enable = 1;
      /*case*/ OPCODE_OP_IMM:   regfile_write_enable = 1;
      /*case*/ OPCODE_AUIPC:    regfile_write_enable = 1;
      /*case*/ OPCODE_OP:       regfile_write_enable = 1;
      /*case*/ OPCODE_LUI:      regfile_write_enable = 1;
      /*case*/ OPCODE_JALR:     regfile_write_enable = 1;
      /*case*/ OPCODE_JAL:      regfile_write_enable = 1;
      default:              regfile_write_enable = 1'x;
    endcase
  end

  always_comb begin
    import rv_constants::*;

    case (inst_opcode) 
      /*case*/ OPCODE_LOAD:     alu_operand_a_select = CTL_ALU_A_RS1;
      /*case*/ OPCODE_MISC_MEM: alu_operand_a_select = 1'x;
      /*case*/ OPCODE_OP_IMM:   alu_operand_a_select = CTL_ALU_A_RS1;
      /*case*/ OPCODE_AUIPC:    alu_operand_a_select = CTL_ALU_A_PC;
      /*case*/ OPCODE_STORE:    alu_operand_a_select = CTL_ALU_A_RS1;
      /*case*/ OPCODE_OP:       alu_operand_a_select = CTL_ALU_A_RS1;
      /*case*/ OPCODE_LUI:      alu_operand_a_select = CTL_ALU_A_RS1;
      /*case*/ OPCODE_BRANCH:   alu_operand_a_select = CTL_ALU_A_RS1;
      /*case*/ OPCODE_JALR:     alu_operand_a_select = CTL_ALU_A_RS1;
      /*case*/ OPCODE_JAL:      alu_operand_a_select = CTL_ALU_A_PC;
      default:              alu_operand_a_select = 1'x;
    endcase
  end

  always_comb begin
    import rv_constants::*;
    case (inst_opcode) 
      /*case*/ OPCODE_LOAD:     alu_operand_b_select = CTL_ALU_B_IMM;
      /*case*/ OPCODE_MISC_MEM: alu_operand_b_select = 1'x;
      /*case*/ OPCODE_OP_IMM:   alu_operand_b_select = CTL_ALU_B_IMM;
      /*case*/ OPCODE_AUIPC:    alu_operand_b_select = CTL_ALU_B_IMM;
      /*case*/ OPCODE_STORE:    alu_operand_b_select = CTL_ALU_B_IMM;
      /*case*/ OPCODE_OP:       alu_operand_b_select = CTL_ALU_B_RS2;
      /*case*/ OPCODE_LUI:      alu_operand_b_select = CTL_ALU_B_RS2;
      /*case*/ OPCODE_BRANCH:   alu_operand_b_select = CTL_ALU_B_RS2;
      /*case*/ OPCODE_JALR:     alu_operand_b_select = CTL_ALU_B_IMM;
      /*case*/ OPCODE_JAL:      alu_operand_b_select = CTL_ALU_B_IMM;
      default:              alu_operand_b_select = 1'x;
    endcase
  end

  always_comb begin
    import rv_constants::*;
    case (inst_opcode) 
      /*case*/ OPCODE_LOAD: alu_op_type2 = CTL_ALU_ADD;
      /*case*/ OPCODE_MISC_MEM: alu_op_type2 = 2'x;
      /*case*/ OPCODE_OP_IMM: alu_op_type2 = CTL_ALU_OP_IMM;
      /*case*/ OPCODE_AUIPC: alu_op_type2 = CTL_ALU_ADD;
      /*case*/ OPCODE_STORE: alu_op_type2 = CTL_ALU_ADD;
      /*case*/ OPCODE_OP: alu_op_type2 = CTL_ALU_OP;
      /*case*/ OPCODE_LUI: alu_op_type2 = 2'x;
      /*case*/ OPCODE_BRANCH: alu_op_type2 = CTL_ALU_BRANCH;
      /*case*/ OPCODE_JALR: alu_op_type2 = CTL_ALU_ADD;
      /*case*/ OPCODE_JAL: alu_op_type2 = CTL_ALU_ADD;
      default: alu_op_type2 = 2'x;
    endcase
  end


  always_comb begin : tock_decode
    import rv_constants::*;

    alu_op_type             = 2'x;
    data_mem_read_enable    = 1'b0;
    data_mem_write_enable   = 1'b0;
    reg_writeback_select    = 3'x;

    case (inst_opcode) 
      /*case*/ OPCODE_LOAD:
      begin
        alu_op_type = CTL_ALU_ADD;
        data_mem_read_enable = 1'd1;
        reg_writeback_select = CTL_WRITEBACK_DATA;
        /*break;*/
      end

      /*case*/ OPCODE_MISC_MEM:
      begin
        // Fence - ignore
        /*break;*/
      end

      /*case*/ OPCODE_OP_IMM:
      begin
        alu_op_type = CTL_ALU_OP_IMM;
        reg_writeback_select = CTL_WRITEBACK_ALU;
        /*break;*/
      end

      /*case*/ OPCODE_AUIPC:
      begin
        alu_op_type = CTL_ALU_ADD;
        reg_writeback_select = CTL_WRITEBACK_ALU;
        /*break;*/
      end

      /*case*/ OPCODE_STORE:
      begin
        alu_op_type = CTL_ALU_ADD;
        data_mem_write_enable = 1'd1;
        /*break;*/
      end

      /*case*/ OPCODE_OP:
      begin
        reg_writeback_select = CTL_WRITEBACK_ALU;
        alu_op_type = CTL_ALU_OP;
        /*break;*/
      end

      /*case*/ OPCODE_LUI:
      begin
        reg_writeback_select = CTL_WRITEBACK_IMM;
        /*break;*/
      end

      /*case*/ OPCODE_BRANCH:
      begin
        alu_op_type = CTL_ALU_BRANCH;
        /*break;*/
      end

      /*case*/ OPCODE_JALR:
      begin
        alu_op_type = CTL_ALU_ADD;
        reg_writeback_select = CTL_WRITEBACK_PC4;
        /*break;*/
      end

      /*case*/ OPCODE_JAL:
      begin
        alu_op_type = CTL_ALU_ADD;
        reg_writeback_select = CTL_WRITEBACK_PC4;
        /*break;*/
      end

      default:
      begin
        data_mem_read_enable = 1'x;
        data_mem_write_enable = 1'x;
        /*break;*/
      end
    endcase
  end
endmodule;

`endif  // RVSIMPLE_SINGLECYCLE_CONTROL_H
