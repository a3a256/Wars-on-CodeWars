#include <stddef.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

typedef struct Max_Min_Pair {
    long long int max, min;
} pair;

pair max_and_min(size_t z1, const long long int arr1[z1],
                 size_t z2, const long long int arr2[z2]) {
  pair pr;
  pr.max = INT_MIN;
  pr.min = INT_MAX;
  long long int i, j, res;
  for(i=0; i<z1; i++){
    for(j=0; j<z2; j++){
      res = abs(arr1[i]-arr2[j]);
      if(res<pr.min){
        pr.min = res;
      }
      if(res>pr.max){
        pr.max = res;
      }
    }
  }
  return pr;
}
