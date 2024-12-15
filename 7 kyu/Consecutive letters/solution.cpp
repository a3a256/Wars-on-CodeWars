#include <map>

bool solve(std::string s){
  if(s.size() < 2){
    return true;
  }
  std::string alp = "abcdefghijklmnopqrstuvwxyz";
  std::map<char, int> mp;
  int i, index, len;
  len = (int)s.size();
  for(i=0; i<len; i++){
    mp[s[i]]++;
  }
  for(auto it: mp){
    for(i=0; i<(int)alp.size(); i++){
      if(alp[i] == it.first){
        index = i;
        break;
      }
    }
    break;
  }
  for(i=index; i<index+len; i++){
    if(mp[alp[i]] != 1){
      return false;
    }
  }
  return true;
}
