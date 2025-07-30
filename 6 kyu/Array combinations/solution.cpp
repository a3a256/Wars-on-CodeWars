#include <vector>
#include <set>

int solve(const std::vector<std::vector<int>> &data)
{
  std::set<int> stk;
  int i, j, vals;
  vals = 1;
  for(i=0; i<data.size(); i++){
    for(j=0; j<data[i].size(); j++){
      stk.insert(data[i][j]);
    }
    vals *= (int)stk.size();
    std::set<int>().swap(stk);
  }
  return vals; // your code here
}
