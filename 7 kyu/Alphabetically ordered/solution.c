#include <stdbool.h>

bool is_ordered (const char *string)
{
  if(string == ""){return true;}
  int i;
  for(i=1; string[i] != '\0'; i++){
    if(string[i] < string[i-1]){
      return false;
    }
  }
	return true;
}
