#include <stdbool.h>
#include <ctype.h>

bool includes_all(const char *const string_pair[2])
{
  char* s1 = string_pair[0];
  char* s2 = string_pair[1];
  int i, j, flag;
  for(i=0; s2[i] != '\0'; i++){
    flag = 0;
    for(j=0; s1[j] != '\0'; j++){
      if(tolower(s2[i]) == tolower(s1[j])){
        flag = 1;
        break;
      }
    }
    if(flag == 0){return false;}
  }
  return true;
}
