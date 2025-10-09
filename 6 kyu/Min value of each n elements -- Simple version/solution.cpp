#include <vector>
#include <cstddef>
#include <math.h>

std::vector<int> min_value(const std::vector<int>& arr, std::size_t n)
{
  std::vector<int> res;
  int i, j, val;
  for(i=0; i<arr.size()-(n-1); i++){
    val = arr[i];
    for(j=i; j<i+n; j++){
      val = std::min(val, arr[j]);
    }
    res.push_back(val);
  }
  return res;
}
