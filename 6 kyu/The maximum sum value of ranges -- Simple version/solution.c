#include <stddef.h>
#include <limits.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int max_sum(size_t a, const int array[a], size_t r, const size_t ranges[r][2]) {
  int i, j, sum, vmax;
  vmax = INT_MIN;
  for(i=0; i<r; i++){
    sum = 0;
    for(j=ranges[i][0]; j<=ranges[i][1]; j++){
      sum += array[j];
    }
    vmax = MAX(vmax, sum);
  }
  return vmax;
}
