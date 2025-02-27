#include <cmath>

class StepInPrimes
{
public:
    static bool is_prime(long long val){
      long long i;
      for(i=2; i<=std::sqrt(val); i++){
        if(val%i == 0){
          return false;
        }
      }
      return true;
    }
  
    static std::pair <long long, long long> step(int g, long long m, long long n){
      std::pair<long long, long long> res = {0, 0};
      long long i;
      for(i=m; i<=n-g; i++){
        if(is_prime(i) && is_prime(i+g)){
          res.first = i;
          res.second = i+g;
          break;
        }
      }
      return res;
    }
};
