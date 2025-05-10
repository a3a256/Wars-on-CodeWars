#include <stddef.h>
#include <stdlib.h>
#include <string.h>

char *frame(const char *text[], size_t nline, char ch)
{
  int i, j, len, top_size;
  top_size = 0;
  for(i=0; i<nline; i++){
    j = 0;
    while(text[i][j] != '\0'){
      j++;
    }
    if(j>top_size){
      top_size = j;
    }
  }
  int line_size = top_size + 5;
  int rows = (int)nline + 2;
  int total = 0;
  char* res = (char*)malloc((line_size*rows)*sizeof(char));
  for(i=0; i<line_size-1; i++){
    res[total] = ch;
    total++;
  }
  res[total] = '\n';
  total++;
  for(i=0; i<nline; i++){
    res[total] = ch;
    total++;
    res[total] = ' ';
    total++;
    for(j=0; text[i][j] != '\0'; j++){
      res[total] = text[i][j];
      total++;
    }
    while(j<top_size){
      res[total] = ' ';
      j++;
      total++;
    }
    res[total] = ' ';
    total++;
    res[total] = ch;
    total++;
    res[total] = '\n';
    total++;
  }
  for(i=0; i<line_size-1; i++){
    res[total] = ch;
    total++;
  }
  res[total] = '\0';
  return res;
}
