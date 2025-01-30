#include <set>

int solve (std::vector<int> v){
  std::set<int> stk;
  for(int i: v){
    stk.insert(i);
  }
  int res = 0;
  for(auto it: stk){
    res += it;
  }
  return res;
}
