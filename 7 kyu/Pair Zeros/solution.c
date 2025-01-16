#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//  assign values to preallocated *results
//  set pointer *r to length of the output

void pair_zeros(size_t a, const int array[a], size_t *r, int *results) {
  if(a == 0){
    return;
  }
  int zeros = 0, total = 0, i, index;
  for(i=0; i<a; i++){
    if(array[i] == 0){
      if(zeros%2 == 0){
        total++;
      }
      zeros++;
    }else{
      total++;
    }
  }
  index = 0;
  zeros = 0;
  i = 0;
  while(index < total){
    if(array[i] == 0){
      if(zeros%2 == 0){
        results[index] = array[i];
        index++;
      }
      zeros++;
    }else{
      results[index] = array[i];
      index++;
    }
    i++;
  }
  *r = total;
}
