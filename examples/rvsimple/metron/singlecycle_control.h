// RISC-V SiMPLE SV -- single-cycle controller
// BSD 3-Clause License
// (c) 2017-2019, Arthur Matos, Marcus Vinicius Lamar, Universidade de Brasília,
//                Marek Materzok, University of Wrocław

#ifndef RVSIMPLE_SINGLECYCLE_CONTROL_H
#define RVSIMPLE_SINGLECYCLE_CONTROL_H

#include "config.h"
#include "constants.h"
#include "metron_tools.h"

class singlecycle_control {
 public:

  logic<2> next_pc_select(logic<7> inst_opcode, logic<1> take_branch) const {
    using namespace rv_constants;
    switch (inst_opcode) {
      case OPCODE_BRANCH: return take_branch ? CTL_PC_PC_IMM : CTL_PC_PC4; break;
      case OPCODE_JALR:   return CTL_PC_RS1_IMM; break;
      case OPCODE_JAL:    return CTL_PC_PC_IMM; break;
      default:            return CTL_PC_PC4; break;
    }
  }

  logic<1> pc_write_enable(logic<7> inst_opcode) const {
    return 0b1;
  }

  logic<1> regfile_write_enable(logic<7> inst_opcode) const {
    using namespace rv_constants;
    switch (inst_opcode) {
      case OPCODE_MISC_MEM: return 0;
      case OPCODE_STORE:    return 0;
      case OPCODE_BRANCH:   return 0;
      case OPCODE_LOAD:     return 1;
      case OPCODE_OP_IMM:   return 1;
      case OPCODE_AUIPC:    return 1;
      case OPCODE_OP:       return 1;
      case OPCODE_LUI:      return 1;
      case OPCODE_JALR:     return 1;
      case OPCODE_JAL:      return 1;
      default:              return b1(DONTCARE);
    }
  }

  logic<1> alu_operand_a_select(logic<7> inst_opcode) const {
    using namespace rv_constants;

    switch (inst_opcode) {
      case OPCODE_AUIPC:    return CTL_ALU_A_PC;
      case OPCODE_JAL:      return CTL_ALU_A_PC;

      case OPCODE_OP:       return CTL_ALU_A_RS1;
      case OPCODE_LUI:      return CTL_ALU_A_RS1;
      case OPCODE_BRANCH:   return CTL_ALU_A_RS1;

      case OPCODE_LOAD:     return CTL_ALU_A_RS1;
      case OPCODE_STORE:    return CTL_ALU_A_RS1;
      case OPCODE_OP_IMM:   return CTL_ALU_A_RS1;
      case OPCODE_JALR:     return CTL_ALU_A_RS1;
      default:              return b1(DONTCARE);
    }
  }

  logic<1> alu_operand_b_select(logic<7> inst_opcode) const {
    using namespace rv_constants;
    switch (inst_opcode) {
      case OPCODE_AUIPC:    return CTL_ALU_B_IMM;
      case OPCODE_JAL:      return CTL_ALU_B_IMM;

      case OPCODE_OP:       return CTL_ALU_B_RS2;
      case OPCODE_LUI:      return CTL_ALU_B_RS2;
      case OPCODE_BRANCH:   return CTL_ALU_B_RS2;

      case OPCODE_LOAD:     return CTL_ALU_B_IMM;
      case OPCODE_STORE:    return CTL_ALU_B_IMM;
      case OPCODE_OP_IMM:   return CTL_ALU_B_IMM;
      case OPCODE_JALR:     return CTL_ALU_B_IMM;
      default:              return b1(DONTCARE);
    }
  }

  logic<2> alu_op_type2(logic<7> inst_opcode) const {
    using namespace rv_constants;
    switch (inst_opcode) {
      case OPCODE_AUIPC:    return CTL_ALU_ADD;
      case OPCODE_JAL:      return CTL_ALU_ADD;

      case OPCODE_OP:       return CTL_ALU_OP;
      case OPCODE_BRANCH:   return CTL_ALU_BRANCH;

      case OPCODE_LOAD:     return CTL_ALU_ADD;
      case OPCODE_STORE:    return CTL_ALU_ADD;
      case OPCODE_OP_IMM:   return CTL_ALU_OP_IMM;
      case OPCODE_JALR:     return CTL_ALU_ADD;
      default:              return b2(DONTCARE);
    }
  }

  logic<1> data_mem_read_enable(logic<7> inst_opcode) const {
    using namespace rv_constants;
    return inst_opcode == OPCODE_LOAD;
  }

  logic<1> data_mem_write_enable(logic<7> inst_opcode) const {
    using namespace rv_constants;
    return inst_opcode == OPCODE_STORE;
  }

  logic<3> reg_writeback_select(logic<7> inst_opcode) const {
    using namespace rv_constants;
    switch (inst_opcode) {
      case OPCODE_OP_IMM:   return CTL_WRITEBACK_ALU;
      case OPCODE_AUIPC:    return CTL_WRITEBACK_ALU;
      case OPCODE_OP:       return CTL_WRITEBACK_ALU;
      case OPCODE_LUI:      return CTL_WRITEBACK_IMM;
      case OPCODE_JALR:     return CTL_WRITEBACK_PC4;
      case OPCODE_JAL:      return CTL_WRITEBACK_PC4;
      case OPCODE_LOAD:     return CTL_WRITEBACK_DATA;
      default:              return b3(DONTCARE);
    }
  }
};

#endif  // RVSIMPLE_SINGLECYCLE_CONTROL_H