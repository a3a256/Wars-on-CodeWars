#include <string>
#include <cctype>
#include <map>

bool is_isogram(const std::string& str)
{
  std::map<char, int> mp;
  for(char c: str){mp[std::tolower(c)]++;if(mp[std::tolower(c)] > 1){return false;}}
  return true;
}
