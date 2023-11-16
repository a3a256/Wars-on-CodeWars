#include <math.h>

bool prime(int n){
  int i;
  if(n<2){
    return false;
  }
  for(i=2; i<=std::sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

std::string solve(int a, int b)
{
  std::string line = "";
  int i=2;
  while(line.size() < (a+b)){
    if(prime(i)){
      line += std::to_string(i);
    }
    i++;
  }
  std::string res = line.substr(a, b);
  return res;
}
