import NLPClassifierUnicoded as NLPClassifier
import TensorIndexing as TensorIndexer
import RNNClassifierModule as RNNClassifier

def categoryFromOutput(output):
  topN, topI = output.topk(1)
  categoryI = topI[0].item()
  return allCategories[categoryI], categoryI

print(categoryFromOutput(output))