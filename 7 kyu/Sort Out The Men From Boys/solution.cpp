#include <vector>
#include <set>
#include <functional>

std::vector<int> menFromBoys(const std::vector<int> &values)
{
  std::set<int, std::greater<int>> dp;
  std::set<int> ap;
  for(int i: values){
    if(i%2 == 0){
      ap.insert(i);
    }else{
      dp.insert(i);
    }
  }
  std::vector<int> res;
  for(auto it: ap){
    res.push_back(it);
  }
  for(auto it: dp){
    res.push_back(it);
  }
  return res;
}
