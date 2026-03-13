#include <vector>

int get_average(std::vector <int> marks)
{
  int val = 0; for(int i: marks){val += i;}
  return val/(int)marks.size();
}
