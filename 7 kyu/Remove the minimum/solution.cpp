#include <vector>
#include <limits.h>
#include <math.h>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
  unsigned int min_val = 2147483647;
  std::vector<unsigned int> v = numbers;
  int i;
  for(i=0; i<numbers.size(); i++){
    min_val = std::min(min_val, numbers[i]);
  }
  for(i=0; i<numbers.size(); i++){
    if(numbers[i] == min_val){
      v.erase(v.begin()+i);
      break;
    }
  }
  return v;
}
