#include <stddef.h>

//  do not allocate memory for the return
//  assign values to pre-allocated array t

void arrange(size_t length, const int s[length], int t[length]) {
  unsigned long i, j, k;
  k = 0;
  j = length-1;
  int step = 0;
  for(i=0; i<length; i+=2){
    if(step%2 == 0){
      t[i] = s[k];
      t[i+1] = s[j];
    }else{
      t[i] = s[j];
      t[i+1] = s[k];
    }
    k++;
    j--;
    step++;
  }
  if(length%2 != 0){
    t[length-1] = s[length/2];
  }
}
