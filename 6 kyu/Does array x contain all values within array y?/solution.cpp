#include <vector>
#include <map>

bool contains_all(const std::vector<int>& arr, const std::vector<int>& target) {
  std::map<int, int> mp;
  for(int i: arr){
    mp[i]++;
  }
  for(int i: target){
    if(mp[i] < 1){
      return false;
    }
  }
  return true;
}
