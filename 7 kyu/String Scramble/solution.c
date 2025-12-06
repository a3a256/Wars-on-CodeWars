#include <stddef.h>

//  do not allocate memory for the return
//  assign value to pre-allocated *result
//  string is always same length as array

void scramble(size_t length, const char *string, const size_t array[length], char *result) {
  int i;
  for(i=0; i<length; i++){
    result[array[i]] = string[i];
  }
  result[i] = '\0';
}
