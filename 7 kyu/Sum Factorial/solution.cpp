#include <vector>

unsigned long long int sum_factorial(std::vector<int> vi){
  unsigned long long int cur, res;
  res = 0;
  int i, j;
  for(i=0; i<vi.size(); i++){
    cur = 1;
    for(j=1; j<=vi[i]; j++){
      cur *= j;
    }
    res += cur;
  }
  return res;
}
