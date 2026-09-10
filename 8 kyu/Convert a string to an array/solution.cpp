#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
  if(s.size() == 0){return {s};}
  std::string word = "";
  std::vector<std::string> res;
  for(char c: s){
    if(c == ' '){
      res.push_back(word);
      word = "";
    }else{
      word += c;
    }
  }
  if(word != ""){res.push_back(word);}
  return res; // your code here
}
