#include <stddef.h>

unsigned long long main_diagonal_product(size_t n, const unsigned short matrix[n][n]) {
  int i;
  unsigned long long res = 1;
  for(i=0; i<n; i++){
    if(matrix[i][i] == 0){
      return 0;
    }else{
      res = res*matrix[i][i];
    }
  }
  return res;
}
