#include <sys/types.h>

ssize_t odd_one(const int *arr, size_t z) {
  int i; for(i=0; i<z; i++){if(arr[i]%2 != 0){return i;}}
  return -1;
}
