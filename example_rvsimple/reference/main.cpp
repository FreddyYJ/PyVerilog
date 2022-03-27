// RISC-V SiMPLE SV -- testbench
// BSD 3-Clause License
// (c) 2019, Marek Materzok, University of Wrocław

#include <stdio.h>
#include "Vtoplevel.h"
#include "verilated.h"
#include "metron_tools.h"


int run_test(const char* test_name) {
  LOG_R("running %6s: ", test_name);

  char buf1[256];
  char buf2[256];
  sprintf(buf1, "+text_file=rv_tests/%s.text.vh", test_name);
  sprintf(buf2, "+data_file=rv_tests/%s.data.vh", test_name);
  const char* argv2[2] = { buf1, buf2 };
  Verilated::commandArgs(2, argv2);

  fflush(stdout);

  int time;
  int result = 0;
  Vtoplevel top;
  for (int rep = 0; rep < 10000; rep++) {
    top.reset = 1;
    top.clock = 0;
    top.eval();
    top.reset = 1;
    top.clock = 1;
    top.eval();
    top.reset = 0;
    top.clock = 0;

    for (time = 0; time < 100000; time++) {
      top.clock = time & 1;
      top.eval();
      if (top.bus_write_enable && top.bus_address == 0xfffffff0) {
        result = top.bus_write_data;
        break;
      }
    }
  }

  if (time == 100000) {
    LOG_Y("TIMEOUT\n");
    return -1;
  } else if (result) {
    LOG_G("PASS %d @ %d\n", result, time);
    return 0;
  } else {
    LOG_R("FAIL %d @ %d\n", result, time);
    return -1;
  }
}

int main(int argc, const char **argv, const char **env) {
  const char* instructions[38] = {
    "add", "addi", "and", "andi", "auipc", "beq", "bge", "bgeu", "blt", "bltu",
    "bne", "jal", "jalr", "lb", "lbu", "lh", "lhu", "lui", "lw", "or", "ori",
    "sb", "sh", "simple", "sll", "slli", "slt", "slti", "sltiu", "sltu", "sra",
    "srai", "srl", "srli", "sub", "sw", "xor", "xori"
  };

  for (int i = 0; i < 38; i++) {
    run_test(instructions[i]);
  }
  return 0;
}