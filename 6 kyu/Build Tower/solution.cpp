#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
  int total_len = 1 + 2*(nFloors-1);
  std::string line, temp;
  int i, left, right, j;
  line = "";
  for(i=0; i<total_len; i++){
    if(i == total_len/2){
      line += '*';
    }else{
      line += ' ';
    }
  }
  std::vector<std::string> res;
  for(i=0; i<nFloors; i++){
    j = 0;
    left = (total_len/2)-1;
    right = (total_len/2)+1;
    temp = line;
    while(j<i){
      temp[right] = '*';
      temp[left] = '*';
      left--;
      right++;
      j++;
    }
    res.push_back(temp);
  }
  return res;
}
