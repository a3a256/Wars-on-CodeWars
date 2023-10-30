#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

char * uglify_word(const char *str) {
  char nums[26] = "abcdefghijklmnopqrstuvwxyz";
  int i, j, present, index, size;
  size = 0;
  for(i=0; str[i] != '\0'; i++){
    size++;
  }
  char *res = (char*)malloc((size+1)*sizeof(char));
  for(i=0; i<size; i++){
    res[i] = tolower(str[i]);
  }
  res[size] = '\0';
  index = 0;
  for(i=0; i<size; i++){
    present = 0;
    for(j=0; j<26; j++){
      if(res[i] == nums[j]){
        present = 1;
        break;
      }
    }
    if(present == 0){
      index = 0;
    }else{
      if(index%2 == 0){
        res[i] = toupper(res[i]);
      }
      index++;
    }
  }
  return res;
}
