#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool one(const int* arr, size_t size, Predicate fun)
{
  int count = 0;
  int i;
  for(i=0; i<size; i++){
    if(fun(arr[i])){
      count++;
    }
  }
  return count == 1;
}
