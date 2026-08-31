//  do not allocate memory for the return value
//  assign ints to the provided pointer *result

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

void mirror(const int *data, size_t n, int *result) {
  qsort(data, n, sizeof(data[0]), comp);
  int cur = n, i;
  for(i=0; i<n; i++){
    result[i] = data[i];
  }
  i = n-2;
  while(i>-1){
    result[cur] = data[i];
    i--;
    cur++;
  }
}
