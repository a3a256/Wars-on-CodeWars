#include<vector>

std::string sumLength(std::vector<int> input)
{
  int first = 0, second = 0, zero = 0;
  for(int i: input){
    if(i > 0){
      first += i;
    }else if(i < 0){
      second ++;
    }else{
      if(zero%2 == 0){second++;}
      zero++;
    }
  }
  return std::to_string(first) + ' ' + std::to_string(second);
}
