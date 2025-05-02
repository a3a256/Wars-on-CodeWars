#include <string>
#include <vector>
#include <bits/stdc++.h>

std::string fire_and_fury(const std::string& tweet) {
  std::string cur = "";
  int i, j;
  std::vector<std::pair<std::string, int>> v;
  i = 0;
  while(i<4 && i < tweet.size()){
    if(tweet[i] == 'E' || tweet[i] == 'F' || tweet[i] == 'I' || tweet[i] == 'R' || tweet[i] == 'U' || tweet[i] == 'Y'){
      cur += tweet[i];
    }else{
      return "Fake tweet.";
    }
    i++;
  }
  for(i=4; i<tweet.size(); i++){
    if(tweet[i] == 'E' || tweet[i] == 'F' || tweet[i] == 'I' || tweet[i] == 'R' || tweet[i] == 'U' || tweet[i] == 'Y'){
      if(cur == "FURY" || cur == "FIRE"){
        if(v.empty()){
          v.push_back({cur, 1});
        }else{
          if(v.back().first == cur){
            v.back().second += 1;
          }else{
            v.push_back({cur, 1});
          }
        }
      }
    }else{
      return "Fake tweet.";
    }
    cur.erase(cur.begin());
    cur += tweet[i];
  }
  if(cur == "FURY" || cur == "FIRE"){
    if(v.empty()){
      v.push_back({cur, 1});
    }else{
      if(v.back().first == cur){
        v.back().second += 1;
      }else{
        v.push_back({cur, 1});
      }
    }
  }
  std::string res = "";
  for(i=0; i<v.size(); i++){
    if(v[i].first == "FURY"){
      res += "I am ";
      for(j=1; j<v[i].second; j++){
        res += "really ";
      }
      res += "furious. ";
    }else{
      res += "You ";
      for(j=1; j<v[i].second; j++){
        res += "and you ";
      }
      res += "are fired! ";
    }
  }
  if(res.size() == 0){
    return "Fake tweet.";
  }
  res.pop_back();
  return res;
}
