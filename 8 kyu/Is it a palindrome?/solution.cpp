#include <string>
#include <cctype>

bool isPalindrom (const std::string& str)
{
  int i, j;
  i = 0;
  j = str.size()-1;
  while(i<=j){
    if(std::tolower(str[i]) != std::tolower(str[j])){
      return false;
    }
    i++;
    j--;
  }
  return true;
}
