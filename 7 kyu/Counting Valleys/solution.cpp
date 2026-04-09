#include <string>

int countValleys(const std::string& s){
  int level = 0, valleys = 0;
  for(char c: s){
    if(c == 'D'){
      level -= 1;
    }else if(c == 'U'){
      level += 1;
      if(level == 0){
        valleys ++;
      }
    }
  }
  return valleys;
}
