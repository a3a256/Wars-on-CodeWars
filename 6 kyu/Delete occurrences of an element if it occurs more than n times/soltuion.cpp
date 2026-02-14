#include <map>

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
  std::map<int, int> mp;
  std::vector<int> res;
  for(int i: arr){
    if(mp[i] < n){
      res.push_back(i);
      mp[i]++;
    }
  }
  return res;
}
