import os
import numpy

import torch
import torch_neuron
from torch.nn import functional

from transformers import MarianMTModel, MarianTokenizer, MarianConfig
from transformers.generation_utils import GenerationMixin
from transformers.modeling_outputs import Seq2SeqLMOutput, BaseModelOutput
from transformers.modeling_utils import PreTrainedModel

