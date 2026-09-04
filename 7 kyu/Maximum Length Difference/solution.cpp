#include <string>
#include <vector>
#include <math.h>

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2){
      int max_diff = -1;
      int i, j;
      for(i=0; i<a1.size(); i++){
        for(j=0; j<a2.size(); j++){
          max_diff = std::max(std::abs((int)a1[i].size() - (int)a2[j].size()), max_diff);
        }
      }
      return max_diff;
    }
};
