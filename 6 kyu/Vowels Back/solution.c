#include <stdlib.h>

char *vowel_back(const char *str_in) {
  char* alphabet = "abcdefghijklmnopqrstuvwxyz";
  int i, j, len, found;
  len = 0;
  for(i=0; str_in[i] != '\0'; i++){
    len++;
  }
  char* res = (char*)malloc(sizeof(char)*len);
  for(i=0; i<len; i++){
    found = -1;
    for(j=0; j<26; j++){
      if(str_in[i] == alphabet[j]){
        found = j;
        break;
      }
    }
    if(str_in[i] == 'a' || str_in[i] == 'u' || str_in[i] == 'i'){
      found -= 5;
      if(found < 0){found += 26;}
    }else if(str_in[i] == 'e'){
      found -= 4;
    }else if(str_in[i] == 'o' || str_in[i] == 'c'){
      found -= 1;
    }else if(str_in[i] == 'd'){
      found -= 3;
    }else{
      found = (found+9)%26;
    }
    if(alphabet[found] == 'c' || alphabet[found] == 'o' || alphabet[found] == 'd' || alphabet[found] == 'e'){
      res[i] = str_in[i];
    }else{
      res[i] = alphabet[found];
    }
  }
  res[i] = '\0';
  return res;
}
