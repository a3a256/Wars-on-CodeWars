#include <stddef.h>
#include <stdbool.h>

void move_zeros(size_t len, int arr[len])
{
  bool sorted = false;
  unsigned int i, j;
  int temp;
  while(!(sorted)){
    sorted = true;
    for(i=0; i<len; i++){
      if(arr[i] == 0){
        for(j=i; j<len; j++){
          if(arr[j] != 0){
            sorted = false;
          }
        }
      }
    }
    if(!(sorted)){
      for(i=0; i<len-1; i++){
        if(arr[i+1] != 0 && arr[i] == 0){
          temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
        }
      }
    }
  }
}
