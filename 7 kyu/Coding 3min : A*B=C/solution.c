#include <stddef.h>
#include <stdbool.h>

// If you find a solution, assign to `*a` and `*b` and return `true`
// Otherwise, return `false`, and the contents of `*a` and `*b` are irrelevant
bool find_AB(size_t length, const int numbers[length], int *a, int *b, int c) {
  int i, j;
  for(i=0; i<length-1; i++){
    for(j=i+1; j<length; j++){
      if(numbers[i]*numbers[j] == c){
        *a = numbers[i];
        *b = numbers[j];
        return true;
      }
    }
  }
  *a = *b = 0;
  return false;
}
