#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int sum = 0;
  for(int i: a){
    sum+=i;
  }
  for(int i: b){
    sum += i;
  }
  return sum; // something went wrong
}
