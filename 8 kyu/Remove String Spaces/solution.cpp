#include <string>

std::string no_space(const std::string& x)
{
  std::string res = "";
  for(char c: x){
    if(c != ' '){res += c;}
  }
   return res;
}
