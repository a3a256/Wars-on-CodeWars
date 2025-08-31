#include <string>
#include <cctype>

std::string abbreviate(std::string sentence) {
  std::string replacement = "";
  std::string res = "";
  int i, index;
  char c;
  for(i=0; i<sentence.size(); i++){
    c = std::tolower(sentence[i]);
    index = (int)c - 'a';
    if(index > 25 || index < 0){
      if(replacement != ""){
        if(replacement.size() >= 4){
          res += replacement[0] + std::to_string(replacement.size()-2) + replacement.back();
        }else{
          res += replacement;
        }
      }
      res += sentence[i];
      replacement = "";
    }else{
      replacement += sentence[i];
    }
  }
  if(replacement != ""){
    if(replacement.size() >= 4){
      res += replacement[0] + std::to_string(replacement.size()-2) + replacement.back();
    }else{
      res += replacement;
    }
  }
  return res;
}
