#include<string>
#include<cctype>

std::string vaporcode(const std::string &str) {
  std::string res;
  for(char c: str){
    res += std::toupper(c);
    if(c != ' '){
      res += ' ';
      res += ' ';
    }else{
      res.pop_back();
    }
  }
  if(res.back() == ' '){
    res.pop_back();
    res.pop_back();
  }
  return res;
}
