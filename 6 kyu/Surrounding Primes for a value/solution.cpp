#include <array>
#include <math.h>

bool prime(unsigned int n){
  unsigned int i;
  for(i=2; i<=std::sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

std::array<unsigned int, 2> primeBefAft(const unsigned int num) {
  unsigned int low, high, i;
  i = num-1;
  while(i>1){
    if(prime(i)){
      low = i;
      break;
    }
    i--;
  }
  i = num+1;
  while(true){
    if(prime(i)){
      high = i;
      break;
    }
    i++;
  }
  return {low, high};
}
