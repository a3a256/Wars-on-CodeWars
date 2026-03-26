#include <stddef.h>

void transpose_matrix(
    size_t rows, size_t cols,
    const int matrix[rows][cols],
    int transpose[cols][rows])
{
  int i, j;
  for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
      transpose[j][i] = matrix[i][j];
    }
  }
}
