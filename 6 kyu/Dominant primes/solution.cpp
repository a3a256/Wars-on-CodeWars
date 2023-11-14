#include <math.h>

bool prime(int n){
  if(n<2){
    return false;
  }
  int i;
  for(i=2; i<=std::sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}
  
  
int solve(int a, int b){
  int i, index, start, res;
  index = 1;
  start = 0;
  while(start<a){
    if(prime(start)){
      index++;
    }
    start++;
  }
  res = 0;
  for(i=start; i<=b; i++){
    if(prime(i)){
      if(prime(index)){
        std::cout << i;
        res += i;
      }
      index++;
    }
  }
  return res;
}
