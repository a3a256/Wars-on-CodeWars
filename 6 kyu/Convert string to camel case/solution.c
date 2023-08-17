//  do not allocate memory for the result
//  write to pre-allocated pointer *camel
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void to_camel_case(const char *text, char *camel) {
  unsigned long i, size;
  int index = 0, count=0;
  size = strlen(text);
  if(size == 0){
    camel[0] = '\0';
    return;
  }
  bool space = false;
  for(i=0; i<size; i++){
    if(text[i] == '_' || text[i] == '-'){
      space = true;
      index ++;
      count ++;
    }else{
      camel[i-index] = (space==true)?toupper(text[i]):text[i];
      space=false;
    }
  }
  camel[size-count] = '\0';
}
