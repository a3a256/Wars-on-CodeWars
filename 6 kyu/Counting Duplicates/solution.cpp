#include <cctype>
#include <map>

size_t duplicateCount(const std::string& in)
{
  std::map<char, int> mp;
  for(char c: in){
    mp[std::tolower(c)] ++;
  }
  int count = 0;
  for(auto it: mp){
    if(it.second > 1){
      count ++;
    }
  }
  size_t ans = count;
  return ans;
}
