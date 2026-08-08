#include <stddef.h>
#include <string.h>

char *split(const char *str_in, size_t size, char *str_out)
{
  int i, index = 0;
  for(i=0; str_in[i] != '\0'; i++){
    if(i%size == 0 && i != 0){
      str_out[index] = ' ';
      index++;
    }
    str_out[index] = str_in[i];
    index++;
  }
  str_out[index] = '\0';
  return str_out;
}
