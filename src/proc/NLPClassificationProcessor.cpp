#include "NLPClassificationProcessor.h"
#include <cstring>
#include <string.h>

auto NLPClassificationProcessor::pipe_text_flow() {
  auto text_pipeline = [this](auto x) {
    x = this->tokenized_iter_arr;
  };

  return text_pipeline;
}

auto NLPClassificationProcessor::label_pipeline() {
  auto dx = [this](int x) {
    x -= 1;
  };

  return dx;
}

auto NLPClassificationProcessor::yield_tokens(char *data_iter) {

}

auto NLPClassificationProcessor::tokenize(char* filename_xpath) {
  char** iter_arr;
  for (auto x = iter_arr; x < &filename_xpath; x++) {
    this->yield_tokens(*x);
    auto tokenized = strtok_s(filename_xpath, " ", x);
    iter_arr = &tokenized;
  }

  return iter_arr;
}

NLPClassificationProcessor::NLPClassificationProcessor() {
  std::string vowel_specials[1] = {"<aeiou>"};
  // auto vocab = build_vocab_from_iterator(yield_tokens(file_models_xn("public/resources/data/models/hemingway")), specials);
  // vocab.set_default_index(specials);
}

torch::Tensor NLPClassificationProcessor::forward_tns(torch::Tensor dx_val) {
  return dx_val;
}