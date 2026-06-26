//  return a char value corresponding to the calculation type:
//    'A' for addition
//    'S' for subraction
//    'M' for multiplication
//    'D' for division

#include <math.h>

#define EPS 1e-9

char calc_type(double a, double b, double c) {
  if(fabs(a+b - c) < EPS){return 'A';}
  if(fabs(a-b-c) < EPS){return 'S';}
  if(fabs(a*b - c) < EPS){return 'M';}
  return 'D';
}
