#include <map>

int repeats(std::vector<int>v){
  std::map<int, int> mp;
  for(int i: v){
    mp[i]++;
  }
  int res = 0;
  for(auto it: mp){
    if(it.second == 1){res += it.first;}
  }
  return res;
}
