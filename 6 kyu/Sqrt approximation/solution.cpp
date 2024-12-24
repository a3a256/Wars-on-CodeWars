#include <math.h>

std::vector<int> sqrtApproximation(double number) {
  int k = (int)std::sqrt(number);
  if(k * k == (int)number){
    return {k};
  }
  return {k, k+1};
}
