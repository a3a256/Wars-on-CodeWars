#include <string>
#include <cctype>

std::string string_expansion(const std::string& s) {
  int i, j, n, tims, k;
  std::string num = "";
  std::string str = "";
  std::string res = "";
  for(i=0; i<s.size(); i++){
    n = std::isdigit(s[i]);
    if(n == 1){
      if(str.size() != 0){
        if(num.size() != 0){
          tims = std::stoi(num);
          for(j=0; j<str.size(); j++){
            for(k=0; k<tims; k++){
              res += str[j];
            }
          }
        }else{
          res += str;
        }
        str = "";
        num = "";
      }
      num = s[i];
    }else{
      str += s[i];
    }
  }
  if(str.size() != 0){
    if(num.size() != 0){
      tims = std::stoi(num);
      for(j=0; j<str.size(); j++){
        for(k=0; k<tims; k++){
          res += str[j];
        }
      }
    }else{
      res += str;
    }
    str = "";
    num = "";
  }
  return res;
}
