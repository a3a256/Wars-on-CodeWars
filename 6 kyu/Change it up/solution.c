#include <ctype.h>

char *change_it_up (char *str_out, const char *str_in)
{
  char *alp = "abcdefghijklmnopqrstuvwxyz";
  char *vowels = "aeiou";
  int i, j, found;
  char c;
  for(i=0; str_in[i] != '\0'; i++){
    c = tolower(str_in[i]);
    for(j=0; j<26; j++){
      if(c == alp[j]){
        if(j == 25){
          c = alp[0];
        }else{
          c = alp[j+1];
        }
        break;
      }
    }
    for(j=0; j<5; j++){
      if(tolower(c) == vowels[j]){
        c = toupper(c);
        break;
      }
    }
    str_out[i] = c;
  }
  str_out[i] = '\0';
  return str_out;
}
