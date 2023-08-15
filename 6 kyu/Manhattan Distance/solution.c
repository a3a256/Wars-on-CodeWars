// a and b contain coordinate points
// both are guaranteed to be size 2
#include <stdio.h>
int manhattan_distance(int *a, int *b) {
  int one = a[0]-b[0];
  int two = a[1]-b[1];
  if(one<0){
    one *= -1;
  }
  if(two<0){
    two *= -1;
  }
  one += two;
  return one;
}
