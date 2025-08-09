#include <math.h>

int is_prime(int n){
  if(n<=1){
    return 0;
  }
  int i;
  for(i=2; i<=sqrt(n); i++){
    if(n%i == 0){
      return 0;
    }
  }
  return 1;
}

int twin_prime(int n) {
  int i, count;
  count = 0;
  for(i=1; i<=n; i++){
    if(is_prime(i-1) && is_prime(i+1)){
      count++;
    }
  }
  return count;
}
