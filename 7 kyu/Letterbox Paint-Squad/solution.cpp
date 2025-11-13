#include <array>

using namespace std;

array<int, 10> paint_letterboxes(int start, int end)
{
  array<int, 10> res = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int n;
  while(start<=end){
    n = start;
    while(n>0){
      res[n%10]++;
      n/=10;
    }
    start++;
  }
  return res;
}
