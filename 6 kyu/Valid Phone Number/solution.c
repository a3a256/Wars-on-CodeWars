#include <stdbool.h>
#include <stdio.h>

bool valid_phone_number(const char* number) {
  int i, len, val;
  len = 0;
  for(i=0; number[i] != '\0'; i++){
    len++;
  }
  if(len != 14){
    return false;
  }
  for(i=0; i<len; i++){
    val = (int)number[i] - 48;
    if(val < 0 || val > 9){
      if(number[i] != ' ' && number[i] != '(' && number[i] != ')' && number[i] != '-'){
        return false;
      }
    }
  }
  if(number[0] != '(' || number[4] != ')'){
    return false;
  }
  if(number[5] != ' '){
    return false;
  }
  if(number[9] != '-'){
    return false;
  }
  for(i=1; i<4; i++){
    val = (int)number[i] - 48;
    if(val < 0 || val > 9){
      return false;
    }
  }
  for(i=6; i<9; i++){
    val = (int)number[i] - 48;
    if(val < 0 || val > 9){
      return false;
    }
  }
  for(i=10; i<14; i++){
    val = (int)number[i] - 48;
    if(val < 0 || val > 9){
      return false;
    }
  }
  return true;
}
