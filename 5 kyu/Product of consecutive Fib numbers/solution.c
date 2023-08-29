#include <stdio.h>
typedef unsigned long long ull;

unsigned long long* productFib(ull prod) {
  ull one, two, three, res;
  one = 0;
  two = 1;
  three = one+two;
  res = two*three;
  while(res<prod){
    one = two;
    two = three;
    three = one+two;
    res = one*two;
  }
  static ull arr[3];
  arr[0] = one;
  arr[1] = two;
  if(res == prod){
    arr[2] = 1;
  }else{
    arr[2] = 0;
  }
  return arr;
}
