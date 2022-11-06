import random
import NLPClassifierUnicoded
import TensorIndexing
import RNNClassifierModule
import CategoricalOutputs

def randomChoice(l):
    return l[random.randint(0, len(l) - 1)]

def randomTrainingExample():
    category = randomChoice(allCsategories)
    line = randomChoice(categoryLines[category])
    category_tensor = torch.tensor([allCategories.index(category)], dtype=torch.long)
    line_tensor = lineToTensor(line)
    return category, line, category_tensor, line_tensor

for i in range(10):
    category, line, category_tensor, line_tensor = randomTrainingExample()
    print('category =', category, '/ line =', line)

# Change random input values to reading a list of most recurring Hemingway
#   sentences.
