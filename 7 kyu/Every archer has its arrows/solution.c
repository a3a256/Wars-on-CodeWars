#include <stdbool.h>
#include <stddef.h>

bool archers_ready(size_t length, const unsigned array[length]) {
  int i;
  for(i=0; i<length; i++){
    if(array[i] < 5){return false;}
  }
  return length != 0;
}
