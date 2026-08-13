#include <string>

std::string reverseString(const std::string &str)
{
  std::string res = str;
  int i, j;
  i = 0;
  j = res.size()-1;
  char c;
  while(i<=j){
    c = res[i];
    res[i] = res[j];
    res[j] = c;
    i++;
    j--;
  }
  return res;
}
