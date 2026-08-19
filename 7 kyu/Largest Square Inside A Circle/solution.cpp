#include <math.h>

int area_largest_square(int r){
  int diag = r*2;
  int squared_side = (diag*diag)/2;
  return squared_side;
}
