#include <stddef.h>

unsigned magic_sum(size_t length, const unsigned array[length]) {
  unsigned i, j, res;
  res = 0;
  for(i=0; i<length; i++){
    if(array[i]%2 != 0){
      j = array[i];
      while(j>0){
        if(j%10 == 3){res += array[i];break;}
        j /= 10;
      }
    }
  }
  return res;
}
