#include <map>
#include <cstring>
#include <vector>

#ifndef ALBERT_TOKENIZER_FAST_H
#define ALBERT_TOKENIZER_FAST_H

class AlbertTokenizer {
  public:
  AlbertTokenizer();
  ~AlbertTokenizer();
  void vocabFile(std::string filename);
  std::string lowercase(bool isLowercase);      /* defaults to True*/
  std::string removeSpace(bool isSpaceRemoved); /* defaults to True */
  std::string keepAccents(bool isAccentskept);  /* defaults to True */
  std::string bosToken(std::string str);        /* defaults to "[CLS]" */
  std::string eosToken(std::string str);        /* defaults to "[SEP]" */
  std::string unkToken(std::string str);        /* defaults to "<unk>" */
  std::string sepToken(std::string str);        /* defaults to "[SEP]" */
  std::string padToken(std::string str);        /* defaults to "<pad>" */
  std::string clsToken(std::string str);        /* defaults to "[CLS]" */
  std::string maskToken(std::string str);       /* defaults to "[MASK]" */
  std::vector<std::string> tokenize(std::string contents);
  std::vector<float>
    toConvert(std::vector<std::string>
              tokens); // tokens to tensors. Give tokens scores based to
  // matching target data and test data.
  
  private:
  std::map<std::string, int> vocabulary;
  std::map<int, std::string> tokenTuple;
  bool isLowercase;
  int maxLen;
};

#endif // ALBERT_TOKENIZER_FAST_H