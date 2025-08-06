#include <string>
#include <unordered_set>
#include <vector>
#include <map>

std::string stripComments(
  const std::string& str,
  const std::unordered_set<char>& markers
) {
  std::vector<std::string> v;
  std::string temp = "";
  std::map<char, int> mp;
  for(auto it: markers){
    mp[it]++;
  }
  int i, j;
  std::string res = "";
  for(i=0; i<str.size(); i++){
    if(str[i] == '\n'){
      v.push_back(temp);
      temp = "";
    }else{
      temp += str[i];
    }
  }
  if(temp != ""){
    v.push_back(temp);
  }
  temp = "";
  for(i=0; i<v.size(); i++){
    for(j=0; j<v[i].size(); j++){
      if(mp[v[i][j]] != 0){
        break;
      }else{
        temp += v[i][j];
      }
    }
    while(temp.back() == ' '){
      temp.pop_back();
    }
    res += temp;
    res += '\n';
    temp = "";
  }
  res.pop_back();
  return res;
}
