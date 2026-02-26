#include <ctype.h>

void testit(char *something) {
  int i;
  for(i=0; something[i] != '\0'; i++){
    if(something[i] == ' '){
      something[i-1] = toupper(something[i-1]);
    }
  }
  something[i-1] = toupper(something[i-1]);
}
