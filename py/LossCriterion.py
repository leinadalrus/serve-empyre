import NLPClassifierUnicoded
import TensorIndexing
import RNNClassifierModule
import CategoricalOutputs
import TrainingPrep

import torch.nn

criterion = torch.nn.NLLLoss()

learningRate = 0.005

def trainTensors(categoryTensor, lineTensor):
  hidden = rnn.initHidden()
  rnn.zero_grad()

  for i in range(lineTensor.size()[0]):
    output, hidden = rnn(lineTensor[i], hidden)

  loss = criterion(output, categoryTensor)
  loss.backward()

  for p in rnn.parameters():
    p.data.add_(p.grad.data, alpha=-learningRate)

  return output, loss.item()