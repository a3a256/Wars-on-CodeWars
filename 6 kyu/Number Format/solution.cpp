#include<string>

std::string numberFormat(long long n){
  int i, j, pos;
  pos = 1;
  if(n<0){
    pos = 0;
  }
  if(pos == 0){
    n = n*(-1);
  }
  j = 0;
  std::string line = std::to_string(n);
  std::string res = "";
  for(i=line.size()-1; i>-1; i--){
    res = line[i] + res;
    j++;
    if(j == 3){
      res = ',' + res;
      j = 0;
    }
  }
  if(res[0] == ','){
    res.erase(res.begin()+0);
  }
  if(pos == 0){
    res = '-'+res;
  }
  return res;
}
