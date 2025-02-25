#include <stdbool.h>
#include <stddef.h>

bool in_sphere(size_t z, const double coords[z], double radius) {
  double cur_val = (double)0;
  int i;
  for(i=0; i<z; i++){
    cur_val += coords[i]*coords[i];
  }
  return cur_val <= (radius*radius);
}
