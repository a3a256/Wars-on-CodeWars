#include <stddef.h> // NULL
#include <stdlib.h>
#include <ctype.h>

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) {
  int i, count, upper_case, j;
  count = 0;
  upper_case = 0;
  for(i=0; camelCase[i] != '\0'; i++){
    if(camelCase[i] == toupper(camelCase[i])){
      upper_case++;
    }
    count++;
  }
  char *res = (char*)malloc((count+upper_case+1)*sizeof(char));
  j = 0;
  for(i=0; i<count-1; i++){
    res[j] = camelCase[i];
    if(camelCase[i+1] == toupper(camelCase[i+1])){
      j++;
      res[j] = ' ';
    }
    j++;
  }
  res[j] = camelCase[count-1];
  res[count+upper_case] = '\0';
  return res;
}
