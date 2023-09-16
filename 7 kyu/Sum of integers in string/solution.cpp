#include <string>
 
int sumOfIntegers (const std::string& str) {
  int sum;
  std::string temp = "";
  std::string nums = "0123456789";
  sum = 0;
  for(char c: str){
    if(nums.find(c) == std::string::npos){
      if(temp.size() != 0){
        sum += std::stoi(temp);
        temp = "";
      }
    }else{
      temp += c;
    }
  }
  if(temp.size() != 0){
    sum += std::stoi(temp);
  }
  return sum; // your code here
}
