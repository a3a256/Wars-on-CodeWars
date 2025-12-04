#include <stdbool.h>

bool check_vowel(const char *string, int position) {
  int len, i;
  len = 0;
  for(i=0; string[i] != '\0'; i++){
    len++;
  }
  if(position >= len || position < 0){return false;}
  if(string[position] == 'a' || string[position] == 'e' || string[position] == 'i' || string[position] == 'o' || string[position] == 'u'){
    return true;
  }
  if(string[position] == 'A' || string[position] == 'E' || string[position] == 'I' || string[position] == 'O' || string[position] == 'U'){
    return true;
  }
  return false;
}
