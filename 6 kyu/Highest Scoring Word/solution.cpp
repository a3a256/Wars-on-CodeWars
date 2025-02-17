#include <string>

std::string highestScoringWord(const std::string &str)
{
  std::string temp, line;
  line = "";
  temp = "";
  int current = 0, total = 0;
  for(char c: str){
    if(c == ' '){
      total = 0;
      for(char p: temp){total += (int)p-96;}
      if(total > current){
        line = temp;
        current = total;
      }
      temp = "";
    }else{
      temp += c;
    }
  }
  if(temp.size() != 0){
    total = 0;
    for(char c: temp){
      total += (int)c - 96;
    }
    if(total > current){
      line = temp;
    }
  }
  return line;
}
