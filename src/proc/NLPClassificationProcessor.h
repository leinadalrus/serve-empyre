#include <ATen/core/TensorBody.h>
#include <corecrt_wstdio.h>
#include <string>
#include <torch/data/dataloader.h>
#include <torch/nn.h>
#include <torch/nn/module.h>
#include <torch/torch.h>
#include <torch/utils.h>


#ifndef NLP_CLASSIFICATION_PROCESSOR_H
#define NLP_CLASSIFICATION_PROCESSOR_H

class NLPClassificationProcessor : private torch::nn::Module {
public:
  NLPClassificationProcessor();
  ~NLPClassificationProcessor();

  auto flowPipeline();
  auto labelPipeline();

  auto tokenize(char *character);
  auto yieldTokens(char *iterator);

  char *fileModel(std::string filePath);
  torch::Tensor forwardTensor(torch::Tensor dx);

private:
  torch::Tensor coordsX = torch::Tensor(), coordsY = torch::Tensor();
  torch::nn::Linear linearDX1, linearDX2;
  char *tokenIterator;
};

#endif // NLP_CLASSIFICATION_PROCESSOR_H
