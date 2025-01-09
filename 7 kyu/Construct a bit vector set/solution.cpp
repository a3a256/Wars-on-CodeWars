#include <vector>
#include <bitset>
#include <string>
#include <cmath>

int sort_by_bit(const std::vector<int>& array) {
  std::string set = std::bitset<32>(0).to_string();
  int i, j, val;
  for(i=0; i<array.size(); i++){
    set[set.size()-1-array[i]] = '1';
  }
  val = 0;
  j = 0;
  for(i=set.size()-1; i>-1; i--){
    if(set[i] == '1'){
      val += (int)std::pow(2, j);
    }
    j++;
  }
  return val;
}
