#include <string>
#include <limits.h>

std::string highAndLow(const std::string& numbers){
  int minimal = INT_MAX;
  int maximum = INT_MIN;
  int val;
  std::string temp = "";
  for(char c: numbers){
    if(c == ' '){
      val = std::stoi(temp);
      if(val < minimal){
        minimal = val;
      }
      if(val > maximum){
        maximum = val;
      }
      temp = "";
    }else{
      temp += c;
    }
  }
  val = std::stoi(temp);
  if(val < minimal){
    minimal = val;
  }
  if(val > maximum){
    maximum = val;
  }
  temp = "";
  temp += std::to_string(maximum);
  temp += ' ' + std::to_string(minimal);
  return temp;
}
