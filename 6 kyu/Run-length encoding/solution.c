#include <stddef.h>

struct Character {
    unsigned count;
    unsigned char value;
};

struct Character *run_length_encoding (const char *string, size_t *length_out)
{
  if(string == NULL || string[0] == '\0'){*length_out = 0;return NULL;}
  int len = 1, i;
  for(i=1; string[i] != '\0'; i++){
    if(string[i] != string[i-1]){
      len++;
    }
  }
  struct Character* res = (struct Character*)malloc(sizeof(struct Character)*len);
  int freq = 1, index;
  index = 0;
  for(i=1; string[i] != '\0'; i++){
    if(string[i] != string[i-1]){
      res[index].count = freq;
      freq = 1;
      res[index].value = (unsigned char)string[i-1];
      index++;
    }else{
      freq++;
    }
  }
  res[index].count = freq;
  res[index].value = (unsigned char)string[i-1];
  *length_out = len; // report the length of your array
  return res; // memory will be freed
}
