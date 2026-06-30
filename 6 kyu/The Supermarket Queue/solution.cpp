#include <numeric>
#include <limits.h>
#include <math.h>

long queueTime(std::vector<int> customers,int n){
  if(customers.empty()){return 0;}
  if(n >= customers.size()){return *std::max_element(customers.begin(), customers.end());}
  std::vector<int> tills(n, 0);
  int i, j, min_v, res;
  std::cout << "The amount of tills is " << n << '\n';
  i = 0;
  res = 0;
  while(i<customers.size()){
    min_v = 2147483647;
    for(j=0; j<n; j++){
      if(tills[j] == 0){
        tills[j] = customers[i];
        i++;
      }
      std::cout << tills[j] << ' ';
      min_v = std::min(min_v, tills[j]);
    }
    std::cout << '\n';
    res += min_v;
    for(j=0; j<n; j++){
      tills[j] -= min_v;
    }
  }
  res += *std::max_element(tills.begin(), tills.end());
  return res;
}
