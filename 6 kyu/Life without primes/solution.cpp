#include <math.h>
bool prime(int n){
  int i;
  for(i=2; i<=std::sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

bool prime_present(int n){
  int t;
  while(n>0){
    t = n%10;
    if(t == 2 || t == 3 || t == 5 || t == 7){
      return true;
    }
    n = n/10;
  }
  return false;
}


int solve(int n) {
  int i, index;
  if(n == 0){
    return 1;
  }
  index = 1;
  i = 2;
  while(true){
    if(!prime(i)){
      if(!prime_present(i)){
        if(index == n){
          return i;
        }else{
          index++;
        }
      }
    }
    i++;
  }
  return -1;
}
