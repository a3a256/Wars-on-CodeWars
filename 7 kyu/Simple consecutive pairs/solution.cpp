#include <vector>
#include <math.h>

int pairs(const std::vector<int>& arr){
  int i, count = 0;
  for(i=0; i<arr.size(); i += 2){
    if(std::abs(arr[i] - arr[i+1]) == 1){
      count++;
    }
  }
  return count;
}
