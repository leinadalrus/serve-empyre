#include "SampleTensorInjector.h"

int SampleTensorInjector::run(int argc, const char *argv[]) {
  int retval = 0;
  if (argc != 2) {
    std::cerr << "[!?]\n";
    retval = -1;
  }

  try {
    this->module = torch::jit::load(argv[1]);
  } catch (const c10::Error& e) {
    std::cerr << "Error loading the model\n";
    retval = -1;
  }

  return retval;
}