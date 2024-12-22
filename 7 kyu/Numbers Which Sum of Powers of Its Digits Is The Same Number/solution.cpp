#include <vector>
#include <math.h>
#include <vector>

std::vector<int> eqSumPowdig(const int hMax, const int exp) {
  long long i, n, _sum;
  std::vector<int> res;
  for(i=2; i<=hMax; i++){
    n = i;
    _sum = 0;
    while(n > 0){
      _sum += (long long)std::pow(n%10, exp);
      n = n/10;
    }
    if(_sum == i){
      res.push_back(i);
    }
  }
  return res;
}
