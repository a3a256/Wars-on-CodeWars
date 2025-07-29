#include <string>

std::string reverse_words(std::string str)
{
  std::string res, temp;
  res = "";
  temp = "";
  for(char c: str){
    if(c == ' '){
      res += temp;
      res += ' ';
      temp = "";
    }else{
      temp = c + temp;
    }
  }
  res += temp;
  return res;
}
