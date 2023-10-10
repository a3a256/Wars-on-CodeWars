#include <set>
#include <vector>

long countOddPentaFib(long n){
  std::vector<long> res = {0, 1, 1, 2, 4};
  std::set<long> stk;
  if(n < 5){
    return 1;
  }
  long i, value;
  for(i=4; i<n; i++){
    value = res[i-4]+res[i-3]+res[i-2]+res[i-1]+res[i];
    res.push_back(value);
  }
  for(i=0; i<res.size(); i++){
    if(res[i]%2 != 0){
      stk.insert(res[i]);
    }
  }
  
  return stk.size();
}
