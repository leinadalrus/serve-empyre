#include <ATen/core/TensorBody.h>
#include <torch/data/dataloader.h>
#include <torch/nn.h>
#include <torch/nn/module.h>
#include <torch/torch.h>
#include <torch/utils.h>
#include <corecrt_wstdio.h>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>

#ifndef PRE_TRAINED_MODEL_H
#define PRE_TRAINED_MODEL_H

class PreTrainedModel {
public:
  PreTrainedModel(PreTrainedConfig preTrainedConfig, std::string inputs, 
    std::string kwargs): preTrainedConfig(preTrainedConfig) {}

  int loadTFWeights(); // var this->model; var this->config; var path;
  bool isParallizable(bool isVal);
  std::string baseModelPrefix(std::string modelPrefix);
  std::string mainInputName(std::string name);

  torch::nn::Module fromPretrained(std::string modelNameOrFilePath);
  nlohmann::json fromJSON(std::string jsonFilename);

  torch::nn::Module getInputEmbeddings();
  torch::nn::Module getMemoryFootprint();
  torch::nn::Module getOutputEmbeddings();

  int initWeights();
  int postInit();

  int pruneHeads();
  int resizeTokenEmbeddings();
  int savePretrained();

  void setInputEmbeddings(torch::nn::Module moduleValue);
private:
  PreTrainedConfig preTrainedConfig;
};

#endif
