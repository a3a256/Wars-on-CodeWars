#include <utility>
#include <vector>
#include <math.h>

bool proper(long long n){
  long long res = std::sqrt(n);
  return (res*res) == n;
}

long long sum_squares(long long n){
  if(n == 1){
    return 1;
  }
  long long i, sum;
  sum = 1 + n*n;
  for(i=2; i<=n/2; i++){
    if(n%i == 0){
      sum += i*i;
    }
  }
  if(proper(sum)){
    if(std::sqrt(sum)>n){
      return sum;
    }
  }
  
  return -1;
}

class SumSquaredDivisors
{
public:
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n){
      long long i = m, prop, temp;
      std::vector<std::pair<long long, long long>> res;
      while(i<=n){
        prop = sum_squares(i);
        if(prop != -1){
          temp = std::sqrt(prop);
          res.push_back({i, prop});
        }
        i++;
      }
      
      return res;
    }
};
