#include <vector>
#include <map>
#include <math.h>

unsigned int most_frequent_item_count(const std::vector<int>& collection) {
  std::map<int, int> mp;
  for(int i: collection){mp[i]++;}
  int ans = 0;
  for(auto it: mp){ans = std::max(it.second, ans);}
  return ans;
}
