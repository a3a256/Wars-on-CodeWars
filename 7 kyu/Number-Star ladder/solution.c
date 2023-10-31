#include <math.h>
// pattern_string is pre-allocated and large enough
// it can accomodate a trailing '\n', but dont forget to remove it
char *pattern (unsigned n, char *pattern_string)
{
  unsigned index, i, j, k, count, diff, end, rev;
  char temp;
  char nums[10] = "0123456789";
  pattern_string[0] = '1';
  pattern_string[1] = '\n';
  index = 2;
  for(i=2; i<=n; i++){
    pattern_string[index] = '1';
    index++;
    for(j=0; j<i-1; j++){
      pattern_string[index] = '*';
      index++;
    }
    k = i;
    count = 0;
    while(k>0){
      pattern_string[index] = nums[k%10];
      k = k/10;
      index++;
      count++;
    }
    diff = index-count;
    end = index-1;
    for(rev = diff; rev<diff+(count/2); rev++){
      temp = pattern_string[rev];
      pattern_string[rev] = pattern_string[end];
      pattern_string[end] = temp;
      end--;
    }
    pattern_string[index] = '\n';
    index++;
  }
  pattern_string[index-1] = '\0'; // write to pattern_string
  return pattern_string;  // return it
}
