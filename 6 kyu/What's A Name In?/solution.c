#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// returns whether needle is a sub-sequence of haystack
bool is_subsequence (const char *haystack, const char *needle)
{
  unsigned long second = strlen(haystack);
  unsigned long first = strlen(needle);
  if(second < first){
    return false;
  }
  unsigned long i, j, last;
  last = 0;
  bool found = true;
  for(i=0; i<first; i++){
    found = false;
    last = (last==0)?0:last+1;
    for(j=last; j<second; j++){
      if(tolower(haystack[j]) == tolower(needle[i])){
        last = j;
        found = true;
        break;
      }
    }
    if(!(found)){
      return false;
    }
  }
  return true;
}
