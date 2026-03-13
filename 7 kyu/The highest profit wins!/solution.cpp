#include <utility>
#include <vector>
#include <algorithm>

std::pair<int, int> min_max(const std::vector<int>& arr)
{
  int min_val = *std::min_element(arr.begin(), arr.end());
  int max_val = *std::max_element(arr.begin(), arr.end());
  return { min_val, max_val }; // fix me!
}
