#ifndef PRE_TRAINED_CONFIG_H
#define PRE_TRAINED_CONFIG_H

class PreTrainedConfig : public PreTrainedModel {
public:
  PreTrainedConfig(PreTrainedModel preTrained) : model(preTrained) {}

private:
  PreTrainedModel model;
};

#endif