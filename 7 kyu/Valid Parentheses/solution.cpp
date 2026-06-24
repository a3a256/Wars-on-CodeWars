#include <string>

bool validParentheses(const std::string& str) {
  std::string stk = "";
  for(char c: str){
    if(c == '('){
      stk += c;
    }else{
      if(stk.empty()){
        return false;
      }else{
        stk.pop_back();
      }
    }
  }
  return stk.empty();
}
