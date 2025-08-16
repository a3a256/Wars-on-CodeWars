#include <stddef.h>

size_t catch_sign_change(const int *array, size_t length) {
  int prev = 0, i, count;
  count = 0;
  for(i=0; i<length; i++){
    if(prev == 0){
      if(array[i] < 0){
        prev = -1;
      }else{
        prev = 1;
      }
    }else{
      if(array[i] >= 0){
        if(prev < 0){count++;prev = 1;}
      }else{
        if(prev > 0){count++;prev = -1;}
      }
    }
  }
  return count;
}
