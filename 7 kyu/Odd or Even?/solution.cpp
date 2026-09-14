#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
  int res = 0;
  for(int i: arr){res += i;}
  return (res%2 == 0)?"even":"odd"; // your code here
}
