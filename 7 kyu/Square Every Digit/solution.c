#include <stdlib.h>
unsigned long long square_digits (unsigned n)
{
  unsigned long long count, num, res, temp, prev, zeros, i;
  count = 1;
  res = 0;
  prev = -1;
  zeros = 0;
  while(n!=0){
    num = n%10;
    num = num*num;
    if(num != 0){
      for(i=0; i<zeros; i++){
        count *= 10;
      }
      zeros = 0;
    }else{
      zeros++;
    }
    while(num!=0){
      res += num%10*count;
      count *= 10;
      num /= 10;
    }
    n = n/10;
  }
	return res;
}
