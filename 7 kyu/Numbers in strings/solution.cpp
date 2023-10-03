#include <limits.h>
#include <algorithm>

int solve(std::string s){
  int value = INT_MIN;
  std::string nums = "0123456789";
  std::string temp = "";
  for(char c: s){
    if(nums.find(c) != std::string::npos){
      temp += c;
    }else{
      if(temp.size() != 0){
        value = std::max(std::stoi(temp), value);
      }
      temp = "";
    }
  }
  if(temp.size() != 0){
    value = std::max(std::stoi(temp), value);
  }
  return value;
}
