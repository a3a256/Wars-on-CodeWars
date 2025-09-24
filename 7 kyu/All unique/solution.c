#include <stdbool.h>

bool has_unique_chars(const char *str) {
  int i, j;
  for(i=0; str[i] != '\0'; i++){
    for(j=0; str[j] != '\0'; j++){
      if(i != j && str[i] == str[j]){return false;}
    }
  }
  return true;
}
