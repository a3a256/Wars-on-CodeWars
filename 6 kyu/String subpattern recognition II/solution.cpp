#include <map>

bool hasSubpattern(const std::string& str){
  if(str.size() == 1){return false;}
  std::map<char, int> mp;
  for(char c: str){
    mp[c]++;
  }
  int freq = (int)str.size();
  for(auto it: mp){
    if(it.second < freq){
      freq = it.second;
    }
  }
  int i;
  bool flag = false;
  for(i=2; i<=freq; i++){
    flag = true;
    for(auto it: mp){
      if(it.second%i != 0){
        flag = false;
      }
    }
    if(flag){return true;}
  }
  return false;
}
