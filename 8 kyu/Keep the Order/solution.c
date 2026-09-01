#include <sys/types.h>

ssize_t keep_order(size_t length, const int array[length], int value) {
  int i;
  for(i=0; i<length; i++){
    if(value <= array[i]){return i;}
  }
  return i;
}
