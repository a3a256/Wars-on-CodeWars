#include <stdbool.h>
#include <math.h>

bool equable_triangle(unsigned a, unsigned b, unsigned c) {
  unsigned perimeter = a+b+c;
  unsigned s = perimeter/2;
  unsigned area = s*(s-a)*(s-b)*(s-c);
  area = sqrt(area);
  return area == perimeter;
}
