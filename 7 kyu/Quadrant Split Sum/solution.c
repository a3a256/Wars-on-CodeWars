#include <stddef.h>
#define MAX(a,b) (((a)>(b))?(a):(b))

int max_land_value(size_t height, size_t width, const int area[height][width]) {
  int h_middle = height/2, w_middle = width/2;
  int first = 0, second = 0, third = 0, fourth = 0;
  int i, j, k, l;
  k = height/2 + height%2;
  for(i=0; i<height/2; i++){
    l = width/2 + width%2;
    for(j=0; j<width/2; j++){
      first += area[i][j];
      second += area[i][l];
      third += area[k][j];
      fourth += area[k][l];
      l++;
    }
    k++;
  }
  return MAX(MAX(first, second), MAX(fourth, third));
}
