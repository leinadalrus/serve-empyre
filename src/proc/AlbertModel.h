#include <ATen/core/TensorBody.h>
#include <corecrt_wstdio.h>
#include <string>
#include <torch/data/dataloader.h>
#include <torch/nn.h>
#include <torch/nn/module.h>
#include <torch/torch.h>
#include <torch/utils.h>


#ifndef ALBERT_MODEL_H
#define ALBERT_MODEL_H

class AlbertModel : private torch::nn::Module {
public:
  AlbertModel(AlbertConfig config): config(config);
  ~AlbertModel();

private:
  AlbertConfig config;
};

#endif