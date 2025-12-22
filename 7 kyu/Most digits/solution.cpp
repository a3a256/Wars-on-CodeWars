#include <vector>

int findLongest(const std::vector<int>& numbers) {
  int res, count, n, temp;
  count = 0;
  res = 0;
  for(int i: numbers){
    n = i;
    temp = 0;
    while(n>0){
      n = n/10;
      temp++;
    }
    if(temp > count){
      count = temp;
      res = i;
    }
  }
  return res;
}
