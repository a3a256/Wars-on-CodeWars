#include <vector>
#include <cstddef>
#include <algorithm>

std::vector<std::size_t> find_lineup(const std::vector<std::size_t>& distances)
{
  std::vector<std::size_t> mp (distances.size(), -1);
  int i;
  for(i=0; i<distances.size(); i++){
    if(mp[distances[i]] == -1){mp[distances[i]] = i+1;}else{return {};}
  }
  return mp;
}
