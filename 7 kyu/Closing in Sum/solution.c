#include <stdlib.h>
#include <stdio.h>

unsigned short closing_in_sum(unsigned long long n) {
  int count = 0, i = 0, j = 0;
  unsigned long long backup = n;
  unsigned short res = 0;
  while(backup != 0){
    backup /= 10;
    count++;
  }
  int *arr = malloc(count*sizeof(unsigned long long));
  backup = n;
  while(backup != 0){
    arr[i] = backup%10;
    backup = backup/10;
    i++;
  }
  j = count-1;
  for(i=0; i<count/2; i++){
    res += arr[i]+arr[j]*10;
    j --;
  }
  if(count%2 != 0){
    res += arr[count/2];
  }
  return res;
}
