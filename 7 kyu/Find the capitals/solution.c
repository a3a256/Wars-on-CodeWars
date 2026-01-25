#include <stddef.h>
#include <ctype.h>

size_t *find_capitals (const char *word, size_t *uppercase_count)
{
  int i, total;
  total = 0;
  for(i=0; word[i] != '\0'; i++){
    if(toupper(word[i]) == word[i]){
      total++;
    }
  }
  int index = 0;
  size_t* res = (size_t*)malloc(sizeof(size_t) * total);
  for(i=0; word[i] != '\0'; i++){
    if(toupper(word[i]) == word[i]){
      res[index] = i;
      index++;
    }
  }
  *uppercase_count = total;
  return res;
}
