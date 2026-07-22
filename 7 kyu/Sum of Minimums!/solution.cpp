#include <vector>
#include <math.h>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
  int i, j, total = 0, row;
  for(i=0; i<numbers.size(); i++){
    row = 2147483647;
    for(j=0; j<numbers[i].size(); j++){
      row = std::min(row, numbers[i][j]);
    }
    total += row;
  }
  return total;
}
