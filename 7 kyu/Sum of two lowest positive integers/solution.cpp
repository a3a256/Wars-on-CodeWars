#include <vector>
#include <set>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  long long total;
  std::set<int> stk;
  for(int i: numbers){
    stk.insert(i);
  }
  int i = 0;
  total = 0;
  for(auto it: stk){
    if(i<2){
      total += it;
    }else{
      break;
    }
    i++;
  }
  if(stk.size() < 2){
    total *= 2;
  }
  return total;
}
