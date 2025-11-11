#include <string>
#include <map>
#include <cctype>

bool isAnagram(std::string test, std::string original){
  if(test.size() != original.size()){return false;}
  std::map<char, int> mp, qp;
  int i;
  for(i=0; i<test.size(); i++){
    mp[std::tolower(test[i])]++;
    qp[std::tolower(original[i])]++;
  }
  for(auto it: mp){
    if(it.second != qp[it.first]){return false;}
  }
  return true;
}
