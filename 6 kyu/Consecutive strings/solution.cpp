#include <string>
#include <vector>
#include <numeric>

class LongestConsec
{
public:
    static std::string longestConsec(const std::vector<std::string> &strarr, int k){
      unsigned int i, n;
      n = strarr.size();
      std::string line = "", temp;
      if(k > n || k < 0 || n == 0){
        return line;
      }
      for(i=k-1; i<n; i++){
        temp = std::accumulate(strarr.begin()+(i+1)-k, strarr.begin()+i+1, std::string {});
        if(temp.size() > line.size()){
          line = temp;
        }
      }
      return line;
    };
};
