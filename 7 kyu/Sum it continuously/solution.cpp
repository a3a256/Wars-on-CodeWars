#include <vector>

std::vector<int> add(const std::vector<int>& arr)
{
  std::vector<int> v;
  int cur = 0;
  for(int i=0; i<arr.size(); i++){
    cur += arr[i];
    v.push_back(cur);
  }
  return v;
}
