#include <vector>
#include <map>

std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
  std::map<int, int> mp;
  for(int i: values){
    mp[i]++;
  }
  std::vector<int> res;
  for(int i: integers){
    if(mp[i] == 0){
      res.push_back(i);
    }
  }
  return res;
}
