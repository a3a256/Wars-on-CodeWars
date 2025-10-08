#include <stdbool.h>

bool is_happy(unsigned n) {
  int arr[100001];
  int i;
  for(i=0; i<100001; i++){
    arr[i] = 0;
  }
  int cur_val = n, new_val, temp;
  while(cur_val != 1){
    new_val = 0;
    while(cur_val > 0){
      temp = cur_val%10;
      new_val += temp * temp;
      cur_val /= 10;
    }
    if(arr[new_val] != 0 && new_val != 1){return false;}
    arr[new_val] = 1;
    cur_val = new_val;
  }
  return true;
}
