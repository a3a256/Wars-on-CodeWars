#include <stdbool.h>

bool startsWith(const char *string, const char *prefix) {
  int first_len = 0, second_len = 0, i = 0;
  while(string[i] != '\0'){
    i++;
    first_len++;
  }
  i = 0;
  while(prefix[i] != '\0'){
    i++;
    second_len++;
  }
  if(second_len > first_len){
    return false;
  }
  if(second_len == 0){
    return true;
  }
  for(i=0; i<second_len; i++){
    if(prefix[i] != string[i]){
      return false;
    }
  }
	return true;
}
