#include <string>
#include <cctype>

std::string solve(const std::string& str){
  int lowercase_count = 0, upper_case = 0;
  for(char c: str){
    if(std::tolower(c) == c){lowercase_count ++;}
    if(std::toupper(c) == c){upper_case ++;}
  }
  std::string res = "";
  for(char c: str){
    if(upper_case > lowercase_count){
      res += std::toupper(c);
    }else{res += std::tolower(c);}
  }
  return res;
}
