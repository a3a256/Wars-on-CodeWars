#include <stdio.h>
#include <ctype.h>

char *to_jaden_case (char *jaden_case, const char *string)
{
  int i, prev_space;
  prev_space = 1;
  for(i=0; string[i] != '\0'; i++){
    if(string[i] == ' '){
      jaden_case[i] = string[i];
      prev_space = 1;
    }else{
      if(prev_space == 1){
        jaden_case[i] = toupper(string[i]);
      }else{
        jaden_case[i] = string[i];
      }
      prev_space = 0;
    }
  }
	jaden_case[i] = '\0';
	return jaden_case;
}
