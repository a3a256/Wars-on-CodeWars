#include<string>
#include<map>

bool scramble(const std::string& s1, const std::string& s2){
  std::map<char, int> mp, qp;
  int i, j;
  i = s1.size()/2;
  j = s1.size()/2 + 1;
  while(i>-1 || j<s1.size()){
    if(i>-1){
      mp[s1[i]]++;
    }
    if(j<s1.size()){
      mp[s1[j]]++;
    }
    i--;
    j++;
  }
  i = s2.size()/2;
  j = s2.size()/2 + 1;
  while(i>-1 || j<s2.size()){
    if(i>-1){
      qp[s2[i]]++;
    }
    if(j<s2.size()){
      qp[s2[j]]++;
    }
    i--;
    j++;
  }
  for(auto it: qp){
    if(mp[it.first] < it.second){return false;}
  }
  return true;
}
