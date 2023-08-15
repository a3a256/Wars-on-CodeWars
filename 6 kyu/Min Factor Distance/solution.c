#include <limits.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int min_distance(int n) {
  int i, prev, cur;
  prev = 1;
  cur = INT_MAX;
  for(i=2; i<n/2; i++){
    if(n%i == 0){
      cur = MIN(cur, i-prev);
      prev = i;
    }
  }
  cur = MIN(cur, n-prev);
  return cur;
}
