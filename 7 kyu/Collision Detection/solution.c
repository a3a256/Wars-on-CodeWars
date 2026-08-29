#include <stdbool.h>
#include <math.h>

bool IsCollision(float x1, float y1, float r1, float x2, float y2, float r2)
{
  float x_diff = x2 - x1;
  float y_diff = y2 - y1;
  x_diff *= x_diff;
  y_diff *= y_diff;
  float d = x_diff + y_diff;
  d = sqrt(d);
  float r_total = r1 + r2;
  return  d <= r_total;
}
