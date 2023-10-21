#include <vector>
#include <map>
#include <algorithm>

std::vector<unsigned int> missNumsFinder(const std::vector<unsigned int>& arr) {
  unsigned int n = *std::max_element(arr.begin(), arr.end()), i;
  std::vector<unsigned int> res(n+1, 0);
  for(unsigned int j: arr){
    res[j] = 1;
  }
  std::vector<unsigned int> absent;
  for(i=1; i<=n; i++){
    if(res[i] == 0){
      absent.push_back(i);
    }
  }
  return absent;
}
