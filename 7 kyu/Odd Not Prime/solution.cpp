#include <cmath>

bool is_prime(unsigned int n){
  if(n == 1){
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

unsigned int oddNotPrime(unsigned int n){
  int i, count;
  count = 0;
  for(i=1; i<=n; i++){
    if(i%2 != 0){
      if(!is_prime(i)){
        count++;
      }
    }
  }
  return count;
}
