#include <vector>
#include <bits/stdc++.h>

std::vector<int> luxhouse(const std::vector<int> &houses) {
  int biggest, curr, i, j, val;
  std::vector<int> v(houses.size(), 0);
  for(i=houses.size()-1; i>-1; i--){
    biggest = -1;
    curr = houses[i];
    for(j=i+1; j<houses.size(); j++){
      biggest = std::max(houses[j], biggest);
    }
    val = biggest-curr;
    v[i] = std::max(val+1, 0);
  }
  return v;
}
