#include <vector>

std::string pig_it(std::string str)
{
  std::string line = "";
  std::vector<std::string> res;
  std::string alphabet = "abcedfghijklmnopqrstuvwxyz";
  std::string punctuation = "!,./_:;?-/[]{}()";
  for(char c: str){
    if(c == ' '){
      if(line.size()>0){
        res.push_back(line);
      }
      line = "";
    }else if(punctuation.find(c) != std::string::npos){
      if(line.size() > 0){
        res.push_back(line);
      }
      line = "";
      line += c;
      res.push_back(line);
      line = "";
    }
    else{
      line += c;
    }
  }
  if(line.size()>0){
    res.push_back(line);
  }
  std::string fin = "";
  for(std::string s: res){
    if(s.size() > 0){
      if(punctuation.find(s[0]) == std::string::npos){
        char b = s[0];
        s.erase(s.begin()+0);
        s += b;
        s += "ay";
      }
    }
    fin += s + ' ';
  }
  fin.pop_back();
  return fin;
}
