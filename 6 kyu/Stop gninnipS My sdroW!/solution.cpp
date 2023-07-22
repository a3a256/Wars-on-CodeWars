#include <vector>
#include <algorithm>
std::string spinWords(const std::string &str)
{
  std::vector<std::string> res;
  std::string line = "";
  for(char c: str){
    if(c == ' '){
      res.push_back(line);
      line = "";
    }else{
      line += c;
    }
  }
  if(line.size() > 0){
    res.push_back(line);
  }
  std::string fin = "";
  for(std::string s: res){
    if(s.size()>=5){
      std::reverse(s.begin(), s.end());
    }
    fin += s;
    fin += ' ';
  }
  fin.pop_back();
  return fin;
}// spinWords
