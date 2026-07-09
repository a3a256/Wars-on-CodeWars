#include <vector>
#include <string>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
  std::sort(s.begin(), s.end());
  std::string res = "";
  int i;
  for(i=0; i<s[0].size(); i++){
    res += s[0][i];
    res += "***";
  }
  res.pop_back();res.pop_back();res.pop_back();
  return res;
}
