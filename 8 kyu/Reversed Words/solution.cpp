#include <string>

std::string reverse_words(const std::string& str) {
  std::string res = "";
  std::string temp = "";
  for(char c: str){
    if(c == ' '){
      res = temp + ' ' + res;
      temp = "";
    }else{
      temp += c;
    }
  }
  res = temp + ' ' + res;
  res.pop_back();
  return res;
}
