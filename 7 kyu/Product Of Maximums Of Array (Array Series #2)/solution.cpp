#include <vector>
#include <algorithm>

using namespace std; 

int maxProduct (vector<int>numbers , int sub_size)
{
  sort(numbers.begin(), numbers.end());
  int i, cur = 1;
  for(i=0; i<sub_size; i++){
    cur *= numbers.back();
    numbers.pop_back();
  }
  return cur;
}
