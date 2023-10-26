#include <vector>
int get_in_line(std::vector<int>& arr){
  std::vector<int> res;
  int i, j, temp, steps;
  for(i=0; i<arr.size(); i++){
    if(arr[i] == 1){
      res.push_back(arr[i]);
    }
  }
  for(i=0; i<arr.size(); i++){
    if(arr[i] == 2){
      res.push_back(arr[i]);
    }
  }
  for(i=0; i<arr.size(); i++){
    if(arr[i] != 1 && arr[i] != 2){
      res.push_back(arr[i]);
    }
  }
  for(i=0; i<res.size(); i++){
    std::cout << res[i] << " ";
  }
  std::cout << "\n";
  steps = 0;
  while(res[0] == 1){
    i = 1;
    j = res.size()-1;
    while(i<=j){
      if(res[i] != 3 && res[j] != 3 && res[i] != 1){
        temp = res[i];
        res[i] = res[j];
        res[j] = temp;
      }
      i++;
      j--;
    }
    res.erase(res.begin()+0);
    steps++;
  }
  while(res[0] != 0){
    res.erase(res.begin()+0);
    steps++;
  }
  steps++;
  return steps;
}
