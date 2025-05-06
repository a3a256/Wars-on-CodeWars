#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n]) {
  int total_error = 0;
  int i;
  for(i=0; i<n; i++){
    total_error += (a[i] - b[i])*(a[i] - b[i]);
  }
  double ans = (double)total_error/(double)n;
  return ans;
}
