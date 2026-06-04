#include <string>

std::string grid(int n) {
  if(n<=0){return "";}
  std::string alp = "abcdefghijklmnopqrstuvwxyz";
  int i, j;
  std::string res = "";
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      res += alp[(i+j)%26];
      res += ' ';
    }
    res.pop_back();
    res += '\n';
  }
  res.pop_back();
  return res;
}
