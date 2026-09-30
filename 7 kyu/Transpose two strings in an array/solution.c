#include <stdlib.h>

char *transpose_strings(const char *const strings[2])
{
  int max_val = 0;
  int one = 0, two = 0;
  while(strings[0][one] != '\0'){one++;}
  while(strings[1][two] != '\0'){two++;}
  if(one >= two){max_val = one;}else{max_val = two;}
  int i, cur;
  char * res = (char *)malloc(sizeof(char)*(max_val*4));
  cur = 0;
  for(i=0; i<max_val*4; i+=4){
    if(cur >= one){
      res[i+0] = ' ';
    }else{
      res[i+0] = strings[0][cur];
    }
    res[i+1] = ' ';
    if(cur >= two){
      res[i+2] = ' ';
    }else{
      res[i+2] = strings[1][cur];
    }
    res[i+3] = '\n';
    cur++;
  }
  res[max_val*4-1] = '\0';
	return res;
}
