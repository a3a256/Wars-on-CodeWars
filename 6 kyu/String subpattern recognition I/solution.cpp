#include <string>

bool hasSubpattern(const std::string& str){
  int i, count;
  std::string temp = "", res = "";
  for(i=0; i<str.size(); i++){
    temp += str[i];
    count = 1;
    res = temp;
    while(res.size() < str.size()){
      res += temp;
      count++;
    }
    if(res == str && count > 1){
      return true;
    }
  }
  return false;
}
