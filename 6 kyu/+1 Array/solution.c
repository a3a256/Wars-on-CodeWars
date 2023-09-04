#include <stdlib.h>
#include <stdio.h>

// Returned array must be freeable.
//
// *count is an in/out parameter. It contains the size of arr on input,
// and should be set to the lenght of returned array upon return.
//
// When input is invalid, the function should return NULL and set *count to 0.

int *up_array(const int *arr, unsigned *count)
{
  int* first = (int*)malloc(*count*sizeof(int));
  int i, size;
  unsigned len = *count;
  int prev, coef;
  coef = 0;
  size = (int)*count;
  if(size == 0){
    return NULL;
  }
  for(i=size-1; i>-1; i--){
    if(arr[i] < 0 || arr[i] > 9){
      *count = 0;
      return NULL;
    }
    first[i] = arr[i] +coef;
    if(i == size-1){
      first[i]++;
    }
    prev = first[i]%10;
    coef = first[i]/10;
    first[i] = first[i]%10;
  }
  if(coef == 0){
    return first;
  }
  size++;
  int* ptr = (int*)malloc(size*sizeof(int));
  ptr[0] = coef;
  for(i=1; i<size; i++){
    ptr[i] = first[i-1];
  }
  *count = len+1;
  free(first);
  return ptr;
}
