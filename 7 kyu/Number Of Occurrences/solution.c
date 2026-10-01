#include <stddef.h>
#include <string.h>

// key :  element whose count to return
// base:  array in which to search for 'key'
// nmemb: number of elements in 'base'
// size:  size of an array element (i.e. size of 'key')

size_t count_elements(const void *key, const void *base, size_t nmemb, size_t size)
{
  size_t count = 0;
  for(size_t i=0; i<nmemb; i++){
    const void *element = (const char*)base + i*size;
    if(memcmp(key, element, size) == 0){count++;}
  }
  return count;
}
