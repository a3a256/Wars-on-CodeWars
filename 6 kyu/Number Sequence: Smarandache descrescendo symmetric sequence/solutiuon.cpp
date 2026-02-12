#include <vector>

int solve(int n, int bound) {
  int i, j;
  std::vector<int> v;
  for(i=1; i<bound; i++){
    for(j=1; j<=i; j++){
      v.push_back(j);
    }
    for(j=i-1; j>0; j--){
      v.push_back(j);
    }
  }
  for(i=1; i<bound; i++){
    v.push_back(i);
  }
  int total = 0;
  for(i=n; i<v.size(); i += n){
    total += v[i];
  }
  return total;
}
