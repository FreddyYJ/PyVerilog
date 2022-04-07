// If statements whose sub-blocks contain submodule calls _must_ use {}.

class Submod {
public:

  void tick() {
  }
};


class Module {
public:

  void tick() {
    if (1)
      submod.tick();
  }

  Submod submod;
};