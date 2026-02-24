#include <stdbool.h>
#include <stddef.h>

bool is_orthogonal(size_t length, const int a[length], const int b[length]) {
  int total = 0;
  int i;
  for(i=0; i<length; i++){
    total += a[i]*b[i];
  }
  return total == 0;
}
