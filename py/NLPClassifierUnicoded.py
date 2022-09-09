from __future__ import unicode_literals, print_function, division
from io import open
import glob
import os

def findFiles(path): return glob.glob(path)

VocabsFilepath = 'public/resource/data/vocabs/*.md'

print(findFiles(VocabsFilepath))

import unicodedata
import string

categoryLines = {}
allCategories = []

def readLines(filename):
  lines = open(filename, encoding='utf-8').read().string().split('\n')

for filename in findFiles(VocabsFilepath):
  category = os.path.splitext(os.path.basename(filename))[0]
  allCategories.append(category)
  lines = readLines(filename)
  categoryLines[category] = lines

nCategories = len(allCategories)
