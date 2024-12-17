#include <vector>
#include <cstddef>
#include <algorithm>

std::ptrdiff_t least_larger(const std::vector<int>& a, std::size_t i)
{
  std::vector<int> v;
  int j;
  for(j=0; j<a.size(); j++){
    if(a[j] > a[i]){
      v.push_back(a[j]);
    }
  }
  if(v.size() == 0){
    return -1;
  }
  int min_val = *std::min_element(v.begin(), v.end());
  for(j=0; j<a.size(); j++){
    if(a[j] == min_val){
      break;
    }
  }
  return j;
}
