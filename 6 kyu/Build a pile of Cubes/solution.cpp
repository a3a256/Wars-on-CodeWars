#include <math.h>

class ASum
{
  public:
  static long long findNb(long long m){
    long long i, sum;
    sum = 0;
    for(i=1; i<=sqrt(m); i++){
      sum += i*i*i;
      if(sum == m){
        return i;
      }
    }
    return -1;
  }
};
