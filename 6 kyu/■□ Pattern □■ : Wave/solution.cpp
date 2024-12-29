#include <string>
#include <vector>
#include <limits.h>

std::string draw(std::vector<int> waves)
{
  std::string res, line;
  int i, j, top_val;
  top_val = INT_MIN;
  for(i=0; i<waves.size(); i++){
    if(top_val < waves[i]){
      top_val = waves[i];
    }
  }
  line = "";
  for(j=top_val; j>=1; j--){
    res = "";
    for(i=0; i<waves.size(); i++){
      if(waves[i] >= j){
        res += "■";
      }else{
        res += "□";
      }
    }
    line += res + '\n';
  }
  line.pop_back();
  return line;
}
