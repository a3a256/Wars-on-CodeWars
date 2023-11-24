#include <vector>
#include <map>
#include <algorithm>

struct compare{
  inline bool operator() (std::vector<int> &a, std::vector<int> &b){
    if(a[1] == b[1]){
      return a[0] < b[0];
    }
    return a[1] > b[1];
  }
};

std::vector<int> solve(const std::vector<int> &vec) {
  std::map<int, int> mp;
  int i, j;
  for(i=0; i<vec.size(); i++){
    mp[vec[i]]++;
  }
  std::vector<std::vector<int>> v;
  for(auto it: mp){
    v.push_back({it.first, it.second});
  }
  std::sort(v.begin(), v.end(), compare());
  std::vector<int> res;
  for(i=0; i<v.size(); i++){
    for(j=0; j<v[i][1]; j++){
      res.push_back(v[i][0]);
    }
  }
  return res;
}
