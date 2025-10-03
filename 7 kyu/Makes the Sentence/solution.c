#include <stdbool.h>
#include <stddef.h>

bool makes_the_sentence(const char characters[/* count */], size_t count, const char *sentence)
{
  int i, j, cur_count, s_cur;
  for(i=0; sentence[i] != '\0'; i++){
    cur_count = 1;
    for(j=0; sentence[j] != '\0'; j++){
      if(i != j && sentence[i] == sentence[j]){
        cur_count++;
      }
    }
    s_cur = 0;
    for(j=0; j<count; j++){
      if(characters[j] == sentence[i]){s_cur++;}
    }
    if(sentence[i] != ' '){
      if(cur_count != s_cur || s_cur == 0){
        return false;
      }
    }
  }
  return true;
}
