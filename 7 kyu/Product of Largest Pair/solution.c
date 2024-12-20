#include <stddef.h>
#include <limits.h>

unsigned long long max_product(size_t length, const unsigned array[length]) {
  long long i, max_val, max_val_1, res;
  max_val = INT_MIN;
  max_val_1 = INT_MIN;
  for(i=0; i<length; i++){
    if(array[i] > max_val){
      max_val = array[i];
    }
  }
  for(i=0; i<length; i++){
    if(array[i] > max_val_1 && array[i] != max_val){
      max_val_1 = array[i];
    }
  }
  return max_val*max_val_1;
}
