#include <ATen/core/TensorBody.h>
#include <corecrt_wstdio.h>
#include <string>
#include <torch/data/dataloader.h>
#include <torch/nn.h>
#include <torch/nn/module.h>
#include <torch/torch.h>
#include <torch/utils.h>


#ifndef ALBERT_CONFIG_H
#define ALBERT_CONFIG_H

typedef std::string Callable;

class AlbertConfig {
public:
  int vocabSize(int size); /* — Vocabulary size of the ALBERT model. Defines the
                              number of different tokens that can be represented
                              by the inputs_ids passed when calling AlbertModel
                              or TFAlbertModel. Defaults to 30000 */
  int embeddingSize(int size); /* — Dimensionality of vocabulary embeddings.
                                  Defaults to 128 */
  int hiddenSize(int size) /* — Dimensionality of the encoder layers and the
                              pooler layer. Defaults to 4096*/
      int numHiddenLayers(int num); /* — Number of hidden layers in the
                                       Transformer encoder. Defaults to 12*/
  int numHiddenGroups(
      int groupNum); /* — Number of groups for the hidden layers, parameters in
                        the same group are shared. Defaults to 1 */
  int numAttentionHeads(
      int headsNum); /* — Number of attention heads for each attention layer in
                        the Transformer encoder. Defaults to 64*/
  int intermediateSize(
      int interSize); /* — The dimensionality of the “intermediate” (often named
                         feed-forward) layer in the Transformer encoder.
                         Defaults to 16384*/
  int innerGroupNum(int groupNum); /* — The number of inner repetition of
                                      attention and ffn. Defaults to 1*/
  int hiddenAct(
      std::string,
      Callable callback); /* — The non-linear activation function(function or
                             string) in the encoder and pooler. If string,
                             "gelu", "relu", "silu" and "gelu_new" are
                             supported. Defaults to "gelu_new"*/
  int hiddenDropoutProb(
      float dropoutProb); /* — The dropout probability for all fully connected
                             layers in the embeddings, encoder, and pooler.
                             Defaults to 0*/
  int attentionProbsDropoutProb(
      float dropoutProb); /* — The dropout ratio for the attention
                             probabilities. Defaults to 0*/
  int maxPositionEmbeddings(
      int positionEmbeddings); /* — The maximum sequence length that this model
                                  might ever be used with. Typically set this to
                                  something large(e.g., 512 or 1024 or 2048).
                                  Defaults to 512*/
  int typeVocabSize(
      int vocabSize); /* — The vocabulary size of the token_type_ids passed when
                         calling AlbertModel or TFAlbertModel. Defaults to 2*/
  int initializerRange(
      float range);                /* — The standard deviation of the
                                      truncated_normal_initializer for initializing all weight
                                      matrices. Defaults to 0.02*/
  int layerNormEps(float normEps); /* — The epsilon used by the layer
                                      normalization layers. Defaults to 1e-12*/
  int classifierDropoutProb(
      float dropoutProb); /* — The dropout ratio for attached classifiers.
                             Defaults to 0.1*/
  int positionEmbeddingType(std::string str); /* defaults to "absolute" */

private:
};

#endif