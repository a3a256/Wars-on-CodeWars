#include <stdlib.h>

unsigned doors(unsigned n) {
  int *arr = (int*)malloc(sizeof(int)*n);
  int i, j;
  for(i=0; i<n; i++){
    arr[i] = 1;
  }
  for(i=1; i<n; i++){
    for(j=(0+i); j<n; j+=(i+1)){
      if(arr[j] == 0){arr[j] = 1;}
      else{arr[j] = 0;}
    }
  }
  int total = 0;
  for(i=0; i<n; i++){
    total += arr[i];
  }
  return total;
}
