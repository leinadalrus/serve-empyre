import torch

import unicodedata
import string

allLetters = string.ascii_letters + " .,;'-"
nLetters = len(allLetters)

def letterToIndex(letter):
  return allLetters.find(letter)

def letterToTensor(letter):
  tensor = torch.zeros(1, nLetters)
  tensor[0][letterToIndex(letter)] = 1
  return tensor

def lineToTensor(line):
  tensor = torch.zeros(len(line), 1, nLetters)
  for l, letter in enumerate(line):
    tensor[l][0][letterToIndex(letter)] = 1

  return tensor