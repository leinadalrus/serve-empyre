#include <torch/script.h> // One-stop header.

#include <iostream>
#include <memory>

#ifndef SAMPLE_TENSOR_INJECTOR_H
#define SAMPLE_TENSOR_INJECTOR_H

class SampleTensorInjector {
public:
  int run(int argc, const char *argv[]);

private:
  torch::jit::script Module module;
};

#endif