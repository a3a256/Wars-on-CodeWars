#include <vector>
#include <string>

std::string smash(const std::vector<std::string>& words)
{
  std::string join = "";
  for(std::string s: words){join += s;join += ' ';}
  if(!join.empty()){join.pop_back();}
  return join;
}
