#include <stddef.h>

void invert(int array[/* length */], size_t length)
{
  for(int i=0; i<length; i++){array[i] *= -1;}
}
