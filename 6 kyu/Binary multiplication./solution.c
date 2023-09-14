#include <stddef.h>
#include <stdio.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

//  don't allocate memory for a return value
//  assign integers to pre-allocated *result
//  set the size of result array to *res_len

void bin_mul(unsigned m, unsigned n, unsigned *result, size_t *res_len) {
  int index = 0;
  unsigned x, y;
  x = MAX(m, n);
  y = MIN(m, n);
  while(x>0){
    if(x%2 != 0){
      result[index] = y;
      index++;
    }
    x = x/2;
    y = y*2;
  }
  int i, j, temp;
  j = index-1;
  for(i=0; i<index/2; i++){
    temp = result[i];
    result[i] = result[j];
    result[j] = temp;
    j--;
  }
  *res_len = (size_t)(index);
}
