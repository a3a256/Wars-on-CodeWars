#include <stddef.h>

unsigned stanton_measure(size_t length, const unsigned array[length]) {
  unsigned count_ones = 0, measure = 0;
  int i;
  for(i=0; i<length; i++){
    if(array[i] == 1){count_ones++;}
  }
  for(i=0; i<length; i++){
    if(array[i] == count_ones){measure++;}
  }
  return measure;
}
