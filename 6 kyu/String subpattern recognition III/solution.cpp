#include <string>
#include <vector>
#include <map>
#include <algorithm>

std::string hasSubpattern(const std::string& str){
  if(str.size() == 1){return str;}
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
  int i, j;
  bool flag = false;
  for(i=freq; i>1; i--){
    flag = true;
    for(auto it: mp){
      if(it.second%i != 0){
        flag = false;
      }
    }
    if(flag){
      std::string res = "";
      for(auto it: mp){
        for(j=0; j<it.second/i; j++){
          res += it.first;
        }
      }
      return res;
    }
  }
  std::string res = str;
  std::sort(res.begin(), res.end());
  return res;
}
