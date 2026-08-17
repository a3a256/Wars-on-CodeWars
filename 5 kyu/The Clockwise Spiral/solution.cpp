#include <vector>

std::vector<std::vector<int>> create_spiral(int n)
{
  if(n == 1){return {{1}};}
  int circle = 0, i, cur;
  cur = 1;
  std::vector<std::vector<int>> res;
  std::vector<int> temp;
  for(circle=0; circle<n; circle++){
    for(i=0; i<n; i++){temp.push_back(0);}
    res.push_back(temp);
    temp.clear();
  }
  for(circle=0; circle<n; circle++){
    for(i=circle; i<n-circle; i++){
      res[circle][i] = cur;
      cur++;
    }
    for(i=circle+1; i<n-circle; i++){
      res[i][n-circle-1] = cur;
      cur++;
    }
    for(i=n-circle-2; i>circle-1; i--){
      res[n-circle-1][i] = cur;
      cur++;
    }
    for(i=n-circle-2; i>circle; i--){
      res[i][circle] = cur;
      cur++;
    }
  }
  return res;
}
