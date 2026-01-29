#include <stdlib.h>

void strxchg(char *s1, char *s2)
{
  int s1_len, s2_len;
  s1_len = 0;
  s2_len = 0;
  int i;
  for(i=0; s1[i] != '\0'; i++){
    s1_len++;
  }
  for(i=0; s2[i] != '\0'; i++){
    s2_len++;
  }
  char *s3 = (char*)malloc(sizeof(char)*s1_len);
  int j = 0;
  for(i=s1_len-1; i>-1; i--){
    s3[j] = s1[i];
    j++;
  }
  j = 0;
  for(i=s2_len-1; i>-1; i--){
    s1[j] = s2[i];
    j++;
  }
  s1[j] = '\0';
  for(i=0; i<s1_len; i++){
    s2[i] = s3[i];
  }
  s2[i] = '\0';
    // it is guaranteed that s1 and s2 have room for
    // 1 + max(strlen(s1), strlen(s2)) bytes
}
