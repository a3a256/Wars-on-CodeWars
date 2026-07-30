#include <vector>
#include <cstddef>
#include <numeric>

std::size_t num_combo(const std::vector<int>& arr, int num)
{
  int total = std::accumulate(arr.begin(), arr.end(), 0);
  int i, count = 0;
  for(i=0; i<arr.size(); i++){
    if(total - arr[i] == num){count++;}
  }
  return count;
}
