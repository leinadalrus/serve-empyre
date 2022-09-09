#include <ATen/core/TensorBody.h>
#include <corecrt_wstdio.h>
#include <string>
#include <torch/data/dataloader.h>
#include <torch/nn/module.h>
#include <torch/torch.h>
#include <torch/utils.h>
#include <torch/nn.h>

#ifndef NLP_CLASSIFICATION_PROCESSOR_H
#define NLP_CLASSIFICATION_PROCESSOR_H

class NLPClassificationProcessor: private torch::nn::Module {
public:
  NLPClassificationProcessor();
  ~NLPClassificationProcessor();

  char* file_models_xn(std::string filename_xpath);
  torch::Tensor forward_tns(torch::Tensor dx_val);
  
  auto tokenize(char* filename_xpath);
  auto yield_tokens(char* data_iter);
  
  auto pipe_text_flow();
  auto label_pipeline();

private:
  torch::Tensor x_coords = torch::Tensor(), y_coords = torch::Tensor();
  torch::nn::Linear m_linear_an, m_linear_bn;
  char* tokenized_iter_arr;
};

#endif // NLP_CLASSIFICATION_PROCESSOR_H

