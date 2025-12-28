//  don't dynamically allocate memory for return
//  assign results to output, then return output
//  output is preallocated / not null terminated
#include <ctype.h>

char *vowel_one(const char *input, char *output) {
  int i;
  char c;
  for(i=0; input[i] != '\0'; i++){
    c = tolower(input[i]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
      output[i] = '1';
    }else{
      output[i] = '0';
    }
  }
  output[i] = '\0';
  return output;
}
