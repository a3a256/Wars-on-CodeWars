#include <string>

int wordsToMarks(const std::string& str) {
  int total = 0;
  for(char c: str){total += c - 'a' + 1;}
  return total;
}
