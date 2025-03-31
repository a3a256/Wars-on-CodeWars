#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//  assign even numbers to preallocated *filtered
//  set pointer *f to length of this return array

void no_odds(size_t a, const int array[a], int *filtered, size_t *f) {
  int i, j;
  j = 0;
  for(i=0; i<a; i++){
    if(array[i]%2 == 0){
      filtered[j] = array[i];
      j++;
    }
  }
  *f = j;
}
