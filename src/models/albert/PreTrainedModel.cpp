#include "PreTrainedModel.h"

PreTrainedModel::~PreTrainedModel() {}

int loadTFWeights() {} // var this->model {} var this->config {} var path {}
bool isParallizable(bool isVal) {}
std::string baseModelPrefix(std::string modelPrefix) {
  return modelPrefix;
}

std::string mainInputName(std::string name) {
  return name;
}

torch::nn::Module fromPretrained(std::string modelNameOrFilePath) {
  return torch::nn::Module {};
}

nlohmann::json fromJSON(std::string jsonFilename) {
  return nlohmann::json {};
}

torch::nn::Module getInputEmbeddings() {}
torch::nn::Module getMemoryFootprint() {}
torch::nn::Module getOutputEmbeddings() {}
int initWeights() {}
int postInit() {}
int pruneHeads() {}
int resizeTokenEmbeddings() {}
int savePretrained() {}
void setInputEmbeddings(torch::nn::Module moduleValue) {}