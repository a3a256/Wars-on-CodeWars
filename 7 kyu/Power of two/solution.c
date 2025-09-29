#include <stdbool.h>

bool power_of_two(const int x) {
  int val = x;
  while(val > 1){
    if(val%2 == 0){val /= 2;}else{return false;}
  }
  return val > 0;
}
