#include <set>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
      std::set<char> stk;
      for(char c: s1){stk.insert(c);}
      for(char c: s2){stk.insert(c);}
      std::string res = "";
      for(auto it: stk){res += it;}
      return res;
    }
};
