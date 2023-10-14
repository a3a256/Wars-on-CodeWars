#include <stddef.h>
#include <stdio.h>

enum direction {CLOCKWISE, COUNTER_CLOCKWISE};

void rotate (size_t rows, size_t cols, const int matrix[rows][cols], enum direction direction, int rotated[cols][rows])
{
  unsigned long i, j, k;
  if(direction == CLOCKWISE){
    for(i=0; i<cols; i++){
      for(j=0; j<rows; j++){
        rotated[i][j] = matrix[rows-j-1][i];
      }
    }
    return;
  }
  
  for(i=0; i<cols; i++){
    for(j=0; j<rows; j++){
      rotated[i][j] = matrix[j][cols-i-1];
    }
  }
}
