#include <ctype.h>
#include <stdio.h>

char *to_weird_case (char *string)
{
  int i, j, count;
  count = 0;
  while(string[count] != '\0'){
    count++;
  }
  j = 0;
  for(i=0; i<count; i++){
    if(string[i] == ' '){
      j = 0;
    }else{
      if(j%2 == 0){
        string[i] = toupper(string[i]);
      }else{
        string[i] = tolower(string[i]);
      }
      j++;
    }
  }
	return string;
}
