#include <vector>
#include <algorithm>

int consecutive(const std::vector<int>& arr) {
  int min = *std::min_element(arr.begin(), arr.end());
  int max = *std::max_element(arr.begin(), arr.end());
  int i = min, count = 0;
  while(i<max){
    if(std::find(arr.begin(), arr.end(), i) == arr.end()){
      count++;
    }
    i++;
  }
  return count;
}
