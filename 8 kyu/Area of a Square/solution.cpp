// Note: though it's not standard C++, Clang provides
// M_PI in <cmath>, in case you need an accurate value of Pi.
// (Codewars does not yet have C++20's std::numbers::pi)
#include <math.h>

double square_area(double a) {
  double perimeter = (double)a*4;
  double radius = perimeter/(2*M_PI);
  return radius*radius;
}
