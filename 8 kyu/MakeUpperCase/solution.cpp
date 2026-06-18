#include <string>
#include <cctype>

std::string makeUpperCase(const std::string& str) {
  std::string res = "";
  for(char c: str){res += std::toupper(c);}
  return res;
}
