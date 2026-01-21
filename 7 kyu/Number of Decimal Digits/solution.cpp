#include <stdint.h>

int digits(uint64_t n) {
  int count = 0;
  if(n == 0){return 1;}
  while(n>0){
    count++;
    n /= 10;
  }
  return count;
}
