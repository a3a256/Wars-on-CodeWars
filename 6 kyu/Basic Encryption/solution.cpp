#include <string>
std::string encrypt(std::string text, int rule) {
  int i;
  for(i=0; i<text.size(); i++){
    text[i] = (char)(((int)text[i])%256 + rule);
  }
  return text;
};
