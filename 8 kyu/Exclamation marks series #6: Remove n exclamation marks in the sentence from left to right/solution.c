#include <stdlib.h>
char *remove(const char *str_in, int n) {
  unsigned int index = 0, i, size, marks;
  size = 0;
  marks = 0;
  for(i=0; str_in[i] != '\0'; i++){
    if(str_in[i] == '!'){
      marks++;
    }else{
      size++;
    }
  }
  if(n<marks){
    marks -= n;
    size += marks;
  }
  char *res = (char*)malloc(size*sizeof(char));
  for(i=0; str_in[i] != '\0'; i++){
    if(str_in[i] == '!'){
      if(n>0){
        n--;
      }else{
        res[index] = str_in[i];
        index++;
      }
    }else{
      res[index] = str_in[i];
      index++;
    }
  }
  res[index] = '\0';
  return res;
}
