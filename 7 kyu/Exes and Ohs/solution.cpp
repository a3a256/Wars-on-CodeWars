#include <cctype>

bool XO(const std::string& str)
{
  int o = 0, x = 0;
  for(char c: str){
    if(std::tolower(c) == 'x'){x++;}
    if(std::tolower(c) == 'o'){o++;}
  }
  return x == o;
}
