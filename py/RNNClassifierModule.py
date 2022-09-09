import torch.nn
import NLPClassifierUnicoded as NLPClassifier
import TensorIndexing as TensorIndexer

class RNNClassifier(torch.nn.Module):
  def __init__(self, input_size, hidden_size, output_size):
    super(RNNClassifier, self).__init__()
    self.hidden_size = hidden_size
    self.i2h = torch.nn.Linear(input_size + hidden_size, hidden_size)
    self.i2o = torch.nn.Linear(input_size + hidden_size, output_size)
    self,softmax = torch.nn.LogSoftmax(dim=1)

  def forward(self, input, hidden):
    combined = torch.cat((input, hidden), 1)
    hidden = self.i2h(combined) #.i2h() := intoHidden()
    output = self.i2o(combined) #.i2o() := intoOutput()
    output = self.softmax(output) # logarithmic softmax func
    return output, hidden

  def initHidden(self):
    return torch.zeros(1, self.hidden_size)

nHidden = 128
rnn = RNNClassifier(nLetters, nHidden, nCategories)

input = lineToTensor('Amstel')
hidden = torch.zeros(1, nHidden)
output, nextHidden = rnn(input[0], hidden)

print(output+"\n"+hidden)

