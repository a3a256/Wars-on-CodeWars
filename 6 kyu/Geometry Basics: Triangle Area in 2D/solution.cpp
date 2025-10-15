#include <math.h>

typedef struct Point {
    int x;
    int y;
} pnt;

typedef struct Triangle {
    pnt a;
    pnt b;
    pnt c;
} tri;

double distance(pnt one, pnt two){
  int x = one.x - two.x;
  x = x*x;
  int y =one.y - two.y;
  y = y*y;
  double res = sqrt((double)x + (double)y);
  return res;
}

double triangle_area(tri triangle) {
  double a_b = distance(triangle.a, triangle.b);
  double b_c = distance(triangle.b, triangle.c);
  double a_c = distance(triangle.a, triangle.c);
  double semi = (a_b + b_c + a_c)/2.0;
  double res = semi * (semi-a_b) * (semi-b_c) * (semi-a_c);
  res = sqrt(res);
  return res;
}
