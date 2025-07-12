#include <stddef.h>
#include <stdlib.h>

struct pair {
    int a, b;
};

struct pair *generate_pairs(unsigned n, size_t *nb_pairs)
{
  int count = 0, i, j, index;
  for(i=0; i<=n; i++){
    for(j=i; j<=n; j++){
      count++;
    }
  }
  struct pair *res = (struct pair*)malloc(sizeof(struct pair)*count);
  index = 0;
  for(i=0; i<=n; i++){
    for(j=i; j<=n; j++){
      res[index].a = i;
      res[index].b = j;
      index++;
    }
  }
  *nb_pairs = count; // report the number of pairs
  return res; // the array will be freed
}
