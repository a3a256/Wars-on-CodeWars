// Do not dynamically allocate memory for return
// Assign values to the provided *output array
// It is just large enough to hold the expected answer
// Set *length pointer to size of output array
// Return the output array

#include <stddef.h>
#include <math.h>

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int is_valid(int n, int k){
  int i, j;
  for(i=2; i<=sqrt(k); i++){
    for(j=2; j<=sqrt(n); j++){
      if(k%i == 0 && n%j == 0 && i == j){
        return 0;
      }
    }
  }
  return 1;
}

unsigned *coprimes(unsigned n, unsigned output[], size_t *length) {
  int len;
  int i;
  len = 0;
  for(i=1; i<n; i++){
    if(gcd(i, n) == 1){
      output[len] = i;
      len++;
    }
  }
  *length = len;
  return output;
}
