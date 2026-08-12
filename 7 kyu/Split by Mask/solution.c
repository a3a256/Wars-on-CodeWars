#include <stddef.h>
#include <stdbool.h>

// If the masks' lengths do not sum to the length of `string`, return `false`;
// otherwise, return `true` and fill the pre-allocated strings in `parts`
bool split_by_mask(const char *string, size_t length, const size_t masks[length], char *const parts[length]) {
  int total = 0;
  int i, len;
  for(i=0; i<length; i++){
    total += masks[i];
  }
  len=0;
  while(string[len] != '\0'){
    len++;
  }
  int cur = 0, j;
  for(i=0; i<length; i++){
    j = 0;
    for(j=0; j<masks[i]; j++){
      parts[i][j] = string[cur];
      cur++;
    }
    parts[i][j] = '\0';
  }
  return total == len;
}
