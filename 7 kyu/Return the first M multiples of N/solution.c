#include <stdlib.h>

double *multiples(int m, double n) {
  double* res = (double*)malloc(m*sizeof(double));
  int i;
  double val = n;
  for(i=1; i<=m; i++){
    val = n*(double)i;
    res[i-1] = val;
  }
  return res;
}
