#include "metron_tools.h"

// Tocks should be able to call private tasks and functions

class Module {
public:

  logic<8> my_signal;

  void tock() {
    set_signal(get_number());
  }

private:

  logic<8> get_number() const {
    return 7;
  }

  void set_signal(logic<8> number) {
    my_signal = number;
  }

};