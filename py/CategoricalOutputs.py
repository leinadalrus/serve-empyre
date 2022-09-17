import NLPClassifierUnicoded
import TensorIndexing
import RNNClassifierModule

def categoryFromOutput(output):
  topN, topI = output.topk(1)
  categoryI = topI[0].item()
  return allCategories[categoryI], categoryI

print(categoryFromOutput(output))