#include <stdlib.h>
#include <limits.h>

//  function returns user allocated int array
//  output memory will be freed by the tester

int *min_min_max(const int *array, size_t n) {
  int *ptr;
  ptr = (int*)malloc(3*sizeof(int));
  int min_bound, max_bound, mig_range;
  int i, j, present;
  min_bound = INT_MAX;
  max_bound = INT_MIN;
  for(i=0; i<n; i++){
    if(array[i] > max_bound){
      max_bound = array[i];
    }
    if(array[i] < min_bound){
      min_bound = array[i];
    }
  }
  for(i=min_bound; i<=max_bound; i++){
    present = 0;
    for(j=0; j<n; j++){
      if(i == array[j]){
        present = 1;
        break;
      }
    }
    if(!present){
      mig_range = i;
      break;
    }
  }
  ptr[0] = min_bound;
  ptr[1] = mig_range;
  ptr[2] = max_bound;
  return ptr;
}
