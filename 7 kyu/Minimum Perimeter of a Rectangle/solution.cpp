typedef unsigned long long ull;
#include <math.h>

ull minimum_perimeter(ull area) {
  ull perimeter = (1+area)*2, temp = 0, i, j;
  for(i=1; i<=sqrt(area); i++){
    if(area%i == 0){
      j = area/i;
      temp = i*2 + j*2;
      if(temp < perimeter){
        perimeter = temp;
      }
    }
  }
  return perimeter;
}
