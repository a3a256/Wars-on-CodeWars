#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *to_acronym (const char *words)
{
  int len = strlen(words);
  char *res = malloc(len + 1);
  int i, cur;
  cur = 0;
  for(i=0; words[i] != '\0'; i++){
    if(i==0){
      res[cur] = toupper(words[i]);
      cur++;
    }else{
      if(words[i-1] == ' '){
        res[cur] = toupper(words[i]);
        cur++;
      }
    }
  }
  res[cur] = '\0';
	return res;
}
