#include <vector>

int summation(int n){
  int count = 0;
  while(n>0){
    count += n%10;
    n = n/10;
  }
  return count;
}

int sumDigNthTerm(int initval, const std::vector<int> patternl, int nthterm){
  if(nthterm == 1){
    return summation(initval);
  }
  int i, j;
  j = 0;
  int last_term = initval;
  for(i=1; i<nthterm; i++){
    if(j == patternl.size()){
      j = 0;
    }
    last_term += patternl[j];
    j++;
  }
  return summation(last_term);
}
