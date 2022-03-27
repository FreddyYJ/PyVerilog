#include <assert.h>
#include <stdint.h>
#include <stdio.h>

#include "Tests.h"
#include "Vuart_top.h"

//------------------------------------------------------------------------------

TestResults test_lockstep(int argc, char** argv) {
  TEST_INIT("Metron+Verilator lockstep simulation:");

  // Synchronous reset cycle.
  Vuart_top vtop;
  vtop.i_rstn = 0;
  vtop.clock = 0;
  vtop.eval();
  vtop.clock = 1;
  vtop.eval();

  // Reset done, clock starts low.
  vtop.clock = 0;
  vtop.i_rstn = 1;
  vtop.eval();

  LOG_B("========================================\n");
  
  int cycle;
  for (cycle = 0; cycle < 20000; cycle++) {
    bool old_valid = vtop.o_valid;
    vtop.clock = 1;
    vtop.eval();
    vtop.clock = 0;
    vtop.eval();

    if (!old_valid && vtop.o_valid) LOG_B("%c", (uint8_t)vtop.o_data);
    if (vtop.o_done) break;
  }

  LOG_B("\n");
  LOG_B("========================================\n");
  LOG_B("%d\n", cycle);
  EXPECT_EQ(vtop.o_sum, 0x0000b764, "Verilator uart checksum fail");

  TEST_DONE();
}

//------------------------------------------------------------------------------

int main(int argc, char** argv) {
  printf("Running Verilated Metron uart test\n");
  TestResults results;
  results += test_lockstep(argc, argv);
  if (results.test_fail) {
    printf("Some tests fail.\n");
  } else {
    printf("All tests pass.\n");
  }
  return 0;
}

//------------------------------------------------------------------------------