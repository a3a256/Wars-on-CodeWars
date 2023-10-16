#include <string>
#include <vector>

int solve(std::string str, int index){
  if(str[index] != '('){
    return -1;
  }
  std::vector<char> opener;
  int i;
  for(i=index; i<str.size(); i++){
    if(str[i] == '('){
      opener.push_back(str[i]);
    }else if(str[i] == ')'){
      if(opener.size() == 1){
        return i;
      }
      opener.pop_back();
    }
  }
  return -1;
}
