#include <array>
#include <vector>
#include <math.h>
#include <algorithm>
#include <numeric>

bool is_prime(int n){
  int i;
  for(i=2; i<=std::sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

std::array<int, 3> findEmirp(const int n) {
  if(n<=10){
    return {0, 0, 0};
  }
  std::vector<int> v;
  int i, total = 0, save, rev;
  for(i=10; i<n; i++){
    if(is_prime(i)){
      save = i;
      rev = 0;
      while(save>0){
        rev = rev*10 + save%10;
        save = save/10;
      }
      if(rev != i){
        if(is_prime(rev)){
          v.push_back(i);
          total += i;
        }
      }
    }
  }
  return {(int)v.size(), v.back(), total};
}
