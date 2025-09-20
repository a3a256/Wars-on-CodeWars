#include <stddef.h>

int diagonal_sum(size_t size, const int matrix[size][size]) {
  int sum = 0;
  int i;
  for(i=0; i<size; i++){
    sum += matrix[i][i];
  }
  return sum;
}
