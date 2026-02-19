#include <stddef.h>

int sum_array(const int values[/* count */], size_t count)
{
  int total = 0;
  int i;
  for(i=0; i<count; i++){
    total += values[i];
  }
  return total;
}
