#include <vector>
#include <map>

std::vector<int> solve(std::vector<int> vec){
  std::map<int, int> mp;
  std::vector<int> res;
  int i, j, temp;
  for(i=vec.size()-1; i>-1; i--){
    if(mp[vec[i]] == 0){res.push_back(vec[i]);}
    mp[vec[i]]++;
  }
  i = 0;
  j = res.size()-1;
  while(i<=j){
    temp = res[i];
    res[i] = res[j];
    res[j] = temp;
    i++;
    j--;
  }
  return res;
}
