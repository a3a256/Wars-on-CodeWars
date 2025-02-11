#include <stdlib.h>

// return a heap-allocated array of 2 elements

size_t *mine_location(size_t n, const int field[n][n]) {
  size_t *res = (size_t*)malloc(2*sizeof(size_t));
  size_t col, row, i, j;
  int found = 0;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(field[i][j] == 1){
        col = j;
        row = i;
        found = 1;
        break;
      }
    }
    if(found){
      break;
    }
  }
  res[0] = row;
  res[1] = col;
  return res;
}
