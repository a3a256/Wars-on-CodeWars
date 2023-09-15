#include <stack>

bool valid_braces(std::string braces) 
{
  std::stack<char> stk;
  for(char c: braces){
    if(c == '(' || c == '[' || c == '{'){
      stk.push(c);
    }else{
      if(stk.empty()){
        return false;
      }
      if(c == ')' && stk.top() == '('){
        stk.pop();
      }else if(c == ']' && stk.top() == '['){
        stk.pop();
      }else if(c == '}' && stk.top() == '{'){
        stk.pop();
      }else{
        return false;
      }
    }
  }
  return stk.empty();
}
