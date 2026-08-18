#include <math.h>

int nearest_sq(int n)
{
  int root = sqrt(n);
  int upper = n;
  while(root*root != upper){
    upper++;
    root = sqrt(upper);
  }
  root = sqrt(n);
  int lower = n;
  while(lower > 0 && root*root != lower){
    lower--;
    root = sqrt(lower);
  }
  int l = n - lower;
  int r = upper - n;
  if(l == r){return n;}
  if(l > r){return upper;}
  return lower;
}
