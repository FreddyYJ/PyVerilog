﻿// RISC-V SiMPLE SV -- multiplexer module
// BSD 3-Clause License
// (c) 2017-2019, Arthur Matos, Marcus Vinicius Lamar, Universidade de Brasília,
//                Marek Materzok, University of Wrocław

#pragma once
#include "../../../src/uart_test/metron_tools.h"
#include "../../synth/config.h"
#include "constants.h"

template<int WIDTH>
struct multiplexer2 {
    
    logic<WIDTH> o_out;

    void tock(logic<1> sel, logic<WIDTH> in0, logic<WIDTH> in1) {
      o_out = bx<WIDTH>(DONTCARE);
      switch(sel) {
      case 0: o_out = in0; break;
      case 1: o_out = in1; break;
      }
    }
};