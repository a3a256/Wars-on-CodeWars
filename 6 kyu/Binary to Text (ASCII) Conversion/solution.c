#include <stdlib.h>
#include <math.h>

// return a dynamically allocated, free-able C-string
char *binary_to_string(const char *binary) {
  int size = 0;
  int i, index, k, j, num;
  for(i=0; binary[i] != '\0'; i++){
    size++;
  }
  char* s = (char*)malloc((size/8)*sizeof(char));
  if(size < 8){
    return s;
  }
  index = 0;
  for(i=0; i<size; i+=8){
    num = 0;
    k = 0;
    for(j=i+7; j>=i; j--){
      if(binary[j] == '1'){
        num += pow(2, k);
      }
      k++;
    }
    s[index] = (char)num;
    index++;
  }
  s[size/8] = '\0';
  return s;
}
