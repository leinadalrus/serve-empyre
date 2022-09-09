#include <ATen/core/TensorBody.h>
#include <string>
#include <torch/torch.h>
#include <torch/nn.h>

#ifndef D83A9746_FBBF_40D0_A13A_E745F6527430
#define D83A9746_FBBF_40D0_A13A_E745F6527430

#ifndef NLP_CLASSIFICATION_SERVICE_H
#define NLP_CLASSIFICATION_SERVICE_H

class NLPClassificationService {
public:
  NLPClassificationService();
  ~NLPClassificationService();

  char* next(char* tn_file_iter_value[]);
  int* yield_data_tokens(int* tn_file_iter_data);

  auto pipeline_format() -> void {
    auto pipeline_file = [](){};
    return pipeline_file();
  }
  
  std::string collate_batch(char batch[]) {
    return batch;
  }

private:
  std::string formatting_dictionary_ctx;
};

#endif // NLPClassificationService

#endif /* D83A9746_FBBF_40D0_A13A_E745F6527430 */
