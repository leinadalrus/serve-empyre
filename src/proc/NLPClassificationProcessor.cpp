#include "NLPClassificationProcessor.h"
#include <cstring>
#include <string.h>

auto NLPClassificationProcessor::flowPipeline() {
  auto text = [this](auto x) {
    x = this->tokenIterator;
  };

  return text;
}

auto NLPClassificationProcessor::labelPipeline() {
  auto dx = [this](int x) {
    x -= 1;
  };

  return dx;
}

auto NLPClassificationProcessor::yieldTokens(char *iter) {

}

auto NLPClassificationProcessor::tokenize(char* character) {
  char** iter;
  for (auto x = iter; x < &character; x++) {
    this->yieldTokens(*x);
    auto tokenized = strtok_s(character, " ", x);
    iter = &tokenized;
  }

  return iter;
}

NLPClassificationProcessor::NLPClassificationProcessor() {
  std::string sentenceProcess[1] = {""};
  // auto vocab = build_vocab_from_iterator(yield_tokens(file_models_xn("public/resources/data/models/hemingway")), specials);
  // vocab.set_default_index(specials);
}

char *NLPClassificationProcessor::fileModel(std::string filePath) {
  return '';
}

torch::Tensor NLPClassificationProcessor::forwardTensor(torch::Tensor dx) {
  return dx;
}