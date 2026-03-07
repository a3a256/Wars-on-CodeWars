
#include <vector>

void stalinSort(std::vector<int>& arr) {
  if(arr.size() == 0){return;}
  int i = 1;
  while(i<arr.size()){
    if(arr[i] < arr[i-1]){
      arr.erase(arr.begin()+i);
    }else{
      i++;
    }
  }
}
