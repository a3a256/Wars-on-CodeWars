#include <string>
bool solution(std::string const &str, std::string const &ending) {
  int i, j;
  i = str.size()-1;
  j = ending.size()-1;
  while(j>-1){
    if(ending[j] != str[i]){
      return false;
    }
    i--;
    j--;
  }
  return true;
}
