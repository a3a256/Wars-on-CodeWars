#include <vector>

std::vector<int> solve(std::vector<int> array){
  int i, j, found;
  std::vector<int> v;
  for(i=0; i<array.size()-1; i++){
    found = 0;
    for(j=i+1; j<array.size(); j++){
      if(array[i] <= array[j]){
        found = 1;
      }
    }
    if(!found){
      v.push_back(array[i]);
    }
  }
  v.push_back(array.back());
  return v;
}
