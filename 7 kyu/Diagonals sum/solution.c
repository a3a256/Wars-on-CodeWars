#include <stddef.h>

int sum_diagonals(size_t n, const int matrix[n][n]) {
  int i, j, sum;
  sum = 0;
  j = n-1;
  for(i=0; i<n; i++){
    sum += matrix[i][j] + matrix[i][i];
    j--;
  }
  return sum;
}
