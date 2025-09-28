#include <stddef.h>

typedef struct Point {
    int x;
    int y;
} Point;

Point *tick_toward(Point start, Point target, size_t *output_len) {
  int x, y, x_coef = 0, y_coef = 0, size = 1, index;
  if(start.x < target.x){x_coef = 1;}
  else if(start.x > target.x){x_coef = -1;}
  if(start.y < target.y){y_coef = 1;}
  else if(start.y > target.y){y_coef = -1;}
  x = start.x;
  y = start.y;
  while(x != target.x || y != target.y){
    if(x != target.x){x += x_coef;}
    if(y != target.y){y += y_coef;}
    size++;
  }
  Point* res = (Point*)malloc(size*sizeof(Point));
  x = start.x;
  y = start.y;
  index = 1;
  res[0].x = x;
  res[0].y = y;
  while(x != target.x || y != target.y){
    if(x != target.x){x += x_coef;}
    if(y != target.y){y += y_coef;}
    res[index].x = x;
    res[index].y = y;
    index += 1;
  }
  *output_len = size; // report the length of your array through "output_len"
  return res; // return a heap-allocated array
}
