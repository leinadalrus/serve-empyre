from torch.utils.data import Dataset
from dataclasses import make_dataclass
import pandas

class VintageClassicsDataset(Dataset):
  PointVector = make_dataclass("Point", [("x", int), ("y", int)])
  VectorX = 0
  VectorY = 0
  vintageClassicsDf = pandas.DataFrame([PointVector(VectorX, VectorY)])
  # pandas.DataFrame(data=None, index=None, columns=None, dtype=None, copy=None)

  def __init__(self, vintageClassicDf, vectorizer):
    """
    Args:
      vintageClassicsDf (pandas.DataFrame): the dataset
      vectorizer (VintageClassicsVectorizer): vectorizer instantiated from dataset
    """
    self.vintageClassicDf = vintageClassicDf
    self._vectorizer = vectorizer

  def __getitem__(self, index):
    row = self._target_df.iloc[index]
    vintageClassicVector = self._vectorizer.vectorize(row.vintageClassic)