#include <stdbool.h>
#include <stdint.h>

bool swap_cards(uint8_t a, uint8_t b) {
  int a_1, b_1;
  if(a%11 == 0){
    a_1 = (b/10)*10 + a%10;
    b_1 = (a%10)*10 + b%10;
  }else{
    if(a/10 < a%10){
      a_1 = (b/10)*10 + a%10;
      b_1 = (a/10)*10 + b%10;
    }else{
      a_1 = (a/10)*10 + b/10;
      b_1 = (a%10)*10 + b%10;
    }
  }
  return a_1 > b_1;
}
