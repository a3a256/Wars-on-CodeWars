#include <vector>
#include <math.h>

bool prime(unsigned n){
  unsigned i;
  if(n<2){
    return false;
  }
  for(i=2; i<=std::sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

std::vector<unsigned> not_primes(unsigned a, unsigned b)
{
  unsigned i, j, dig;
  bool add = false;
  std::vector<unsigned> v;
  for(i=a; i<b; i++){
    if(!prime(i)){
      j = i;
      add = true;
      while(j!=0){
        dig = j%10;
        if(dig != 2 && dig != 3 && dig != 5 && dig != 7){
          add = false;
          break;
        }
        j = j/10;
      }
      if(add){
        v.push_back(i);
      }
    }
  }
  return v; // Do your magic!
}
