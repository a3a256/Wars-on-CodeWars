#include <math.h>
#include <stdio.h>

//  assigns results to provided pointers: a, b
//  if n is odd or less than 2, assign nothing
//  (the pointers have been pre-assigned to 0)

int prime(unsigned v){
  if(v == 1 || v == 0){
    return 0;
  }
  int i;
  for(i=2; i<=sqrt(v); i++){
    if(v%i == 0){
      return 0;
    }
  }
  return 1;
}

void check_goldbach(unsigned n, unsigned *a, unsigned *b) {
  if(n%2 != 0){
    return;
  }
  int i, mid, left;
  mid = n/2;
  for(i=1; i<=mid; i++){
    if(prime(i) == 1){
      left = n - i;
      if(prime(left) == 1){
        *a = i;
        *b = left;
        break;
      }
    }
  }
}
