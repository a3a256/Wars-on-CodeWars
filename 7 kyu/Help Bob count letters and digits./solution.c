#include <stddef.h>

size_t count_letters_and_digits(const char *input) {
  int count = 0, i, val;
  for(i=0; input[i] != '\0'; i++){
    val = (int)input[i];
    if(val >= 48 && val <= 57){
      count++;
    }else if(val >= 65 && val <= 90){
      count++;
    }else if(val >= 97 && val <= 122){
      count++;
    }
  }
  return count;
}
