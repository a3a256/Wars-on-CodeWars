#include <stddef.h>
#include <stdio.h>

typedef int (*zipfunc_t)(int, int);
#define MIN(a,b) (((a)<(b))?(a):(b))

//  don't allocate memory for the resulting array
//  assign values to the pre-allocated array *a3
//  set pointer z3 to length of the result array
//  z3 is not guaranteed to be initially set to 0

void zip_with(zipfunc_t fn, size_t  z1, const int  a1[z1],
                            size_t  z2, const int  a2[z2],
                            size_t *z3,       int *a3) {
  unsigned long i, min;
  min = MIN(z1, z2);
  *z3 = min;
  for(i=0; i<min; i++){
    a3[i] = fn(a1[i], a2[i]);
  }
}
