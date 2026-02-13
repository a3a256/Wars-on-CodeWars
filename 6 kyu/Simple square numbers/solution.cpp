#include <math.h>

bool is_square(long val){
  long sq = std::sqrt(val);
  return sq*sq == val;
}
long solve(long n){
  long i;
  for(i=1; i<=n; i++){
    if(is_square(n + i*i)){
      return i*i;
    }
  }
  return -1;
} 
