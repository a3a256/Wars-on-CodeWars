#include <stdlib.h>
#include <stdio.h>

char *change(const char *str_in) {
  char *alp = (char*)malloc(26*sizeof(char));
  int i, index;
  for(i=0; i<26; i++){
    alp[i] = '0';
  }
  for(i=0; str_in[i] != '\0'; i++){
    index = (int)str_in[i];
    if(index-97 >= 0 && index-97 < 26){
      alp[index-97] = '1';
    }else if(index-65 >= 0 && index-65 < 26){
      alp[index-65] = '1';
    }
  }
  return alp;
}
