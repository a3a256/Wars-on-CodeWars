#include <cctype>

std::vector<std::string> wave(std::string y){
  std::vector<std::string> res;
  int i;
  for(i=0; i<y.size(); i++){
    if(y[i] != ' '){
      y[i] = std::toupper(y[i]);
      res.push_back(y);
      y[i] = std::tolower(y[i]);
    }
  }
  return res;
}
