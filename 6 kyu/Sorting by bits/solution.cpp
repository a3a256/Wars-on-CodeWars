#include <stdio.h>
#include <stdlib.h>

void sort_by_bit(int arr[/* arr_length */], int arr_length)
{
  int sorted = 0;
  int i, n, first, second;
  while(!sorted){
    sorted = 1;
    for(i=1; i<arr_length; i++){
      n = arr[i];
      first = 0;
      while(n>0){
        first += n%2;
        n /= 2;
      }
      n = arr[i-1];
      second = 0;
      while(n>0){
        second += n%2;
        n /= 2;
      }
      if(first < second){
        sorted = 0;
        n = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = n;
      }else if(first == second){
        if(arr[i] < arr[i-1]){
          sorted = 0;
          n = arr[i];
          arr[i] = arr[i-1];
          arr[i-1] = n;
        }
      }
    }
  }
}
