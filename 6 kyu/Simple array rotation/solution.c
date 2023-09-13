#include <stddef.h>
#include <limits.h>

enum array_type {A, RA, D, RD};

enum array_type find_array_type (size_t length, const int array[length])
{
  unsigned long i, min, max;
  unsigned long minmax[2];
  min = INT_MAX;
  max = INT_MIN;
  for(i=0; i<length; i++){
    if(array[i]<(int)min){
      min = array[i];
      minmax[0] = i;
    }
  }
  for(i=0; i<length; i++){
    if(array[i]>(int)max){
      max = array[i];
      minmax[1] = i;
    }
  }
  if(minmax[0] == 0 && minmax[1] == length-1){
    return A;
  }
  if(minmax[0] == length-1 && minmax[1] == 0){
    return D;
  }
  if(minmax[1] - minmax[0] == 1){
    return RD;
  }
  return RA;
}
