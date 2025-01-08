#include <map>

std::vector<int> solve(std::vector<std::string>a,std::vector<std::string>b){
  std::map<std::string, int> mp;
  for(std::string s: a){
    mp[s]++;
  }
  std::vector<int> res;
  for(std::string s: b){
    res.push_back(mp[s]);
  }
  return res;
}
