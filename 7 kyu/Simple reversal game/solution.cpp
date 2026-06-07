#include <vector>

int solve(int n, int k) {
  std::vector<int> res(n, 0);
  int i, p, j, temp, pos;
  pos = -1;
  for(i=0; i<n; i++){
    res[i] = i;
  }
  for(i=0; i<n-1; i++){
    j = n-1;
    p = i;
    while(j>=p){
      temp = res[p];
      res[p] = res[j];
      res[j] = temp;
      if(res[j] == k){pos = j;}
      if(res[i] == k){pos = i;}
      p++;
      j--;
    }
  }
  return pos;
}
