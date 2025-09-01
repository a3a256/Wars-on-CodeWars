#include <string>
#include <cctype>

bool is_uppercase(const std::string &s) {
  int i;
  for(i=0; i<s.size(); i++){
    if(std::toupper(s[i]) != s[i]){
      return false;
    }
  }
  return true; // TODO
}
