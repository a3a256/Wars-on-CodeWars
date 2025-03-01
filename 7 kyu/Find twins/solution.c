#include <stdbool.h>
#include <stddef.h>

bool elimination(const int *arr, size_t arr_size, int* result)
{
  int i, j;
  for(i=0; i<arr_size; i++){
    for(j=0; j<arr_size; j++){
      if(i != j){
        if(arr[i] == arr[j]){
          *result = arr[i];
          return true;
        }
      }
    }
  }
  return false;
}
