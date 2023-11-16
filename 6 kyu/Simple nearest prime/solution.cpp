#include <math.h>

bool prime(long long n){
  if(n<2){
    return false;
  }
  long long i;
  for(i=2; i<=std::sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

long long solve(long long n){
  long long i, lower, upper, u_d, l_d;
  i = n;
  while(!prime(i)){
    i++;
  }
  upper = i;
  i = n;
  while(!prime(i)){
    i--;
  }
  lower = i;
  u_d = upper - n;
  l_d = n - lower;
  if(l_d == u_d){
    return lower;
  }
  if(u_d < l_d){
    return upper;
  }
  return lower;
}
