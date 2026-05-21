#include <string>

std::string solve(const std::string& s){
  int i = 0, j = s.size()-1, count = 0, k, l;
  while(i<=j){
    count += s[i] != s[j];
    i++;
    j--;
  }
  if(count == 0){return "OK";}
  std::string temp;
  for(i=0; i<s.size(); i++){
    temp = "";
    for(j=0; j<s.size(); j++){
      if(j != i){temp += s[j];}
    }
    k = 0;
    l = temp.size()-1;
    count = 0;
    while(k<=l){
      count += temp[k] != temp[l];
      k++;l--;
    }
    if(count == 0){return "remove one";}
  }
  return "not possible";
}
