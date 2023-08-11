#include <stddef.h>
#include <limits.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int maxSequence(const int* array, size_t n) {
  int deep = INT_MIN;
  unsigned int i;
  int cur = 0;
  for(i=0; i<n; i++){
    cur += array[i];
    deep = MAX(cur, deep);
    cur = MAX(0, cur);
  }
  deep = MAX(deep, 0);
  return deep;
}
