#include <cctype>

class Accumul
{
public:
    static std::string accum(const std::string &s){
      int i, j;
      std::string res = "";
      for(i=0; i<s.size(); i++){
        res += std::toupper(s[i]);
        for(j=0; j<i; j++){
          res += std::tolower(s[i]);
        }
        res += '-';
      }
      res.pop_back();
      return res;
    }
};
