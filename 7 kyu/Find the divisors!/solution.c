#include <stddef.h>

//  assign divisors to array[]
//  set *length to the number of divisors

void divisors(unsigned n, size_t *length, unsigned array[]) {
  int size = 0, i, j;
  for(i=2; i<=n/2; i++){
    if(n%i == 0){
      array[size] = i;
      size++;
    }
  }
  *length = size;
}
