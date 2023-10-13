#include <stdlib.h>
#include <ctype.h>

char *camel_case(const char *s)
{
  int i, count, upper, no_space;
  count = 0;
  no_space = 0;
  for(i=0; s[i] != '\0'; i++){
    if(s[i] != ' '){
      no_space++;
    }
    count++;
  }
  char *res = malloc((count+1)*sizeof(char));
  for(i=0; i<count; i++){
    res[i] = s[i];
  }
  res[count] = '\0';
  i=0;
  while(res[i] == ' ' && i<count){
    i++;
  }
  upper = 1;
  while(i<count){
    if(res[i] == ' '){
      upper = 1;
    }else{
      if(upper == 1){
        res[i] = toupper(res[i]);
        upper = 0;
      }
    }
    i++;
  }
  char *ans = malloc((no_space+1)*sizeof(char));
  i = 0;
  int j = 0;
  while(i<count){
    if(res[i] == ' '){
      i++;
    }else{
      ans[j] = res[i];
      i++;
      j++;
    }
  }
  ans[no_space] = '\0';
  return ans;
}
