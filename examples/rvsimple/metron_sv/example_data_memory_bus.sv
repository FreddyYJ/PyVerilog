// RISC-V SiMPLE SV -- data memory bus
// BSD 3-Clause License
// (c) 2017-2019, Arthur Matos, Marcus Vinicius Lamar, Universidade de Brasília,
//                Marek Materzok, University of Wrocław

`ifndef RVSIMPLE_EXAMPLE_DATA_MEMORY_BUS_H
`define RVSIMPLE_EXAMPLE_DATA_MEMORY_BUS_H

`include "config.sv"
`include "constants.sv"
`include "example_data_memory.sv"
`include "metron_tools.sv"

module example_data_memory_bus
(
  input logic clock,
  input logic[31:0] address,
  output logic[31:0] read_data,
  input logic[31:0] write_data,
  input logic[3:0] byte_enable,
  input logic read_enable,
  input logic write_enable
);
 /*public:*/

 /*private:*/
  example_data_memory data_memory(
    // Inputs
    .clock(clock),
    .address(data_memory_address),
    .wren(data_memory_wren),
    .byteena(data_memory_byteena),
    .data(data_memory_data),
    // Outputs
    .q(data_memory_q)
  );
  logic[rv_config::DATA_BITS - 2-1:0] data_memory_address;
  logic data_memory_wren;
  logic[3:0] data_memory_byteena;
  logic[31:0] data_memory_data;
  logic[31:0] data_memory_q;


 /*public:*/
  always_comb begin /*tock*/
    logic is_data_memory;
    logic[31:0] fetched;

    is_data_memory = address >= rv_config::DATA_BEGIN && rv_config::DATA_END >= address;

    data_memory_address = address[rv_config::DATA_BITS - 2+1:2];
    data_memory_byteena = byte_enable;
    data_memory_data = write_data;
    data_memory_wren = write_enable & is_data_memory;
    /*data_memory.tock();*/

    fetched = data_memory_q;
    read_data = read_enable && is_data_memory ? fetched : 32'bx;
  end
endmodule;

`endif  // RVSIMPLE_EXAMPLE_DATA_MEMORY_BUS_H

