#include <map>

std::string countFeelings(std::string s, std::vector<std::string> arr)
{
  int count = 0;
  int i;
  std::map<char, int> mp, qp;
  for(char c: s){
    mp[c]++;
  }
  for(i=0; i<arr.size(); i++){
    for(char c: arr[i]){
      qp[c]++;
    }
    bool check = true;
    for(auto it: qp){
      if(mp[it.first] == 0){
        check = false;
        break;
      }else if(mp[it.first] != 0 && mp[it.first] < it.second){
        check = false;
        break;
      }
    }
    if(check){count++;}
    qp.clear();
  }
  std::string ending = " feeling";
  if(count%10 != 1){ending += "s.";}else{ending += '.';}
  return std::to_string(count) + ending;
}
