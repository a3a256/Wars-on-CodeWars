#include <algorithm>
#include <iostream>

std::string reverse_letter(const std::string &str)
{
  std::string line = str;
  std::reverse(line.begin(), line.end());
  std::string res = "";
  int i, index;
  for(i=0; i<line.size(); i++){
    index = (int)line[i] - 97;
    if(index >= 0 && index < 26){
      res += line[i];
    }
  }
  return res;
}
