#include <string>
#include <vector>
#include <map>

std::vector<std::string> top3(
        const std::vector<std::string>& products,
        const std::vector<int>& amounts,
        const std::vector<int>& prices)
{
  std::map<int, std::vector<std::string>> mp;
  int i;
  for(i=0; i<products.size(); i++){
    mp[amounts[i] * prices[i]].push_back(products[i]);
  }
  std::vector<std::string> v;
  for(auto it: mp){
    for(i=it.second.size()-1; i>-1; i--){
      v.push_back(it.second[i]);
    }
  }
  std::vector<std::string> res;
  res.push_back(v[v.size()-1]);
  res.push_back(v[v.size()-2]);
  res.push_back(v[v.size()-3]);
  return res;
}
