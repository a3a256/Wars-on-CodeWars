#include <string>

bool isValidMessage(const std::string& str) {
  if(str.size() == 0){
    return true;
  }
  int nums, i, val;
  std::string cur_num = "";
  std::string cur_val = "";
  val = (int)str[0] - '0';
  if(val < 0 && val > 9){
    return false;
  }
  val = (int)str.back() - '0';
  if(val >= 0 && val <= 9){
    return false;
  }
  for(i=0; i<str.size(); i++){
    val = (int)str[i] - '0';
    if(val >= 0 && val <= 9){
      if(cur_val.size() != 0 && cur_num.size() != 0){
        nums = std::stoi(cur_num);
        if(nums != cur_val.size()){
          return false;
        }
        cur_val = "";
        cur_num = "";
      }
      cur_num += str[i];
    }else{
      cur_val += str[i];
    }
  }
  nums = std::stoi(cur_num);
  if(nums != cur_val.size()){
    return false;
  }
  return true;
}
