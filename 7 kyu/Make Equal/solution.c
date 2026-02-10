#include <stddef.h>
#include <stdio.h>

size_t count(size_t length, const long long array[length], long long target, long long x_factor) {
  size_t i, count;
  count = 0;
  long long diff;
  for(i=0; i<length; i++){
    diff = array[i] - target;
    if(x_factor == 0){
      if(diff == 0){count++;}
    }else{
      if(diff%x_factor == 0){count++;}
    }
  }
  return count;
}
