#include <vector>
#include <map>

int findOdd(const std::vector<int>& numbers){
  std::map<int, int> mp;
  for(int i: numbers){
    mp[i] ++;
  }
  for(auto it: mp){
    if(it.second%2 != 0){
      return it.first;
    }
  }
  return 0;
}
