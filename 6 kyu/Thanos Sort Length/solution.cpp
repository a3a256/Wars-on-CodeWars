#include <stddef.h>

size_t solve(size_t length, const int array[length], int start, int end){
  if(end - start == 1){return 1;}
  int i=0, sorted;
  sorted = 1;
  for(i=start; i<end-1; i++){
    if(array[i] > array[i+1]){
      sorted = 0;
      break;
    }
  }
  int len = end - start;
  if(sorted){return len;}
  int mid = len/2;
  if(len%2 != 0){mid++;}
  int left = solve(length, array, start, start+mid);
  int right = solve(length, array, start+mid, end);
  if(left >= right){
    return left;
  }
  return right;
}

size_t thanos_sort(size_t length, const int array[length]) {
  return solve(length, array, 0, length);
}
