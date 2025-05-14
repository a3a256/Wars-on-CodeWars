#include <stddef.h>

typedef int (*funcptr) (int);

int chain (int init_val, size_t length, const funcptr functions[length])
{
  int i;
  for(i=0; i<length; i++){
    init_val = functions[i](init_val);
  }
  return init_val;
}
