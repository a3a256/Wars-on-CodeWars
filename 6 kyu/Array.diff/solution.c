#include <stddef.h>

//  assign the length of your array to *z
//  your returned array will be freed

int *array_diff(const int arr1[/* n1 */], size_t n1, const int arr2[/* n2 */], size_t n2, size_t *z) {
  int i, j, present, res_len, index;
  res_len = 0;
  for(i=0; i<n1; i++){
    present = 0;
    for(j=0; j<n2; j++){
      if(arr1[i] == arr2[j]){
        present = 1;
      }
    }
    if(present != 1){res_len++;}
  }
  int* res = (int*)malloc(sizeof(int)*res_len);
  index = 0;
  for(i=0; i<n1; i++){
    present = 0;
    for(j=0; j<n2; j++){
      if(arr1[i] == arr2[j]){
        present = 1;
      }
    }
    if(present != 1){
      res[index] = arr1[i];
      index++;
    }
  }
  *z = res_len;
  return res;
}
