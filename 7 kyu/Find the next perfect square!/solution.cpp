#include <math.h>

long int findNextSquare(long int sq) {
  long int root = std::sqrt(sq);
  if(root*root != sq){return -1;}
  return (root+1)*(root+1);
}
