#include <vector>
#include <math.h>
#include <functional>
#include <queue>

bool is_prime(unsigned n){
  if(n < 2){
    return false;
  }
  int i;
  for(i=2; i<= std::sqrt(n); i++){
    if(n%i == 0){return false;}
  }
  return true;
}

std::vector<unsigned> prime(unsigned n){
  if(n<2){return {};}
  std::priority_queue<unsigned, std::vector<unsigned>, std::greater<unsigned>> q;
  std::vector<unsigned> res;
  int i, j;
  i = n/2;
  j = n/2+1;
  while(i>=1 || j<=n){
    if(i>=1){
      if(is_prime(i)){
        q.push(i);
      }
    }
    if(j<=n){
      if(is_prime(j)){
        q.push(j);
      }
    }
    i--;
    j++;
  }
  while(!q.empty()){
    res.push_back(q.top());
    q.pop();
  }
  return res;
}
