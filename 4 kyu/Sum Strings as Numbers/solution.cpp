#include <string>
#include <vector>
#include <algorithm>

std::string sum_strings(const std::string& a, const std::string& b) {
  std::vector<int> one;
  std::vector<int> two;
  for(char c: a){
    one.push_back(int(c)-48);
  }
  for(char c: b){
    two.push_back(int(c)-48);
  }
  std::reverse(one.begin(), one.end());
  std::reverse(two.begin(), two.end());
  int coef = 0, sum = 0;;
  unsigned int i = 0, j = 0;
  std::vector<int> res;
  while(i < one.size() || j < two.size()){
    sum = 0;
    if(i < one.size()){
      sum += one[i];
      i ++;
    }
    if(j < two.size()){
      sum += two[j];
      j ++;
    }
    sum += coef;
    if(sum >= 10){
      sum = sum%10;
      coef = 1;
    }else{
      coef = 0;
    }
    res.push_back(sum);
  }
  
  if(coef == 1){
    res.push_back(coef);
  }
  std::string line = "";
  std::reverse(res.begin(), res.end());
  for(int k: res){
    line += std::to_string(k);
  }
  return line;
}
