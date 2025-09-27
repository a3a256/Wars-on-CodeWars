#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> capMe(const std::vector<std::string>& strings) {
  std::vector<std::string> res = strings;
  int i, j;
  for(i=0; i<res.size(); i++){
    for(j=0; j<res[i].size(); j++){
      if(j == 0){res[i][j] = std::toupper(res[i][j]);}
      else{res[i][j] = std::tolower(res[i][j]);}
    }
  }
  return res;
}
