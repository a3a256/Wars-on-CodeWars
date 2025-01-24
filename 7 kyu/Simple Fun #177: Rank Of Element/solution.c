#include <stddef.h>

size_t rank_of_element(const int *arr, size_t count, size_t i)
{
  size_t j, res;
  res = 0;
  for(j=0; j<i; j++){
    if(arr[j] <= arr[i]){
      res++;
    }
  }
  for(j=i+1; j<count; j++){
    if(arr[j] < arr[i]){
      res++;
    }
  }
  return res;
}
