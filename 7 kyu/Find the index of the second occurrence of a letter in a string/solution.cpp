#include <string>

int secondSymbol(const std::string& str, char symbol) {
  int i, index = 0;
  for(i=0; i<str.size(); i++){
    if(str[i] == symbol){
      if(index == 1){
        return i;
      }
      index ++;
    }
  }
  return -1;
}
