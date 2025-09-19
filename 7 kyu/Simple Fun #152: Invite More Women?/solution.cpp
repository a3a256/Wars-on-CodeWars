#include <vector>

bool invite_more_women(const std::vector<int> &invited) {
  int total = 0;
  for(int i: invited){total += i;}
  return total > 0;
}
