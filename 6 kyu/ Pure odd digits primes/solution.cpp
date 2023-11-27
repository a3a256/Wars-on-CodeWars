#include <array>
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

bool odds(int n){
  int i;
  while(n>0){
    i = n%10;
    if(i%2 == 0){
      return false;
    }
    n = n/10;
  }
  return true;
}

std::array<int, 3> onlyOddDigitPrimes(const int n) {
  if(n<2){
    return {};
  }
  int total_below = 0, i, nearest_below, nearest_above;
  for(i=2; i<n; i++){
    if(prime(i)){
      if(odds(i)){
        total_below++;
        nearest_below = i;
      }
    }
  }
  while(true){
    if(prime(i)){
      if(odds(i)){
        nearest_above = i;
        break;
      }
    }
    i++;
  }
  return {total_below, nearest_below, nearest_above};
}
