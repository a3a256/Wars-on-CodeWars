#include <stddef.h>

int dominator(const int *array, size_t n) {
  int i, j, count;
  for(i=0; i<n; i++){
    count = 1;
    for(j=0; j<n; j++){
      if(i != j && array[i] == array[j]){
        count++;
      }
    }
    if(count > n/2){
      return array[i];
    }
  }
  return -1;
}
