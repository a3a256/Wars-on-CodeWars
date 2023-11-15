#include <string>
#include <map>

class RevRot
{
public:
    static bool divisible(std::string &n, std::map<char, int> &mp){
      int sum = 0, i;
      for(i=0; i<n.size(); i++){
        sum += mp[n[i]]*mp[n[i]]*mp[n[i]];
      }
      return sum%2 == 0;
    }
    
    static std::string revRot(const std::string &strng, unsigned int sz){
      std::map<char, int> mp = {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7},
                               {'8', 8}, {'9', 9}};
      std::string line = "";
      std::string res = "";
      if(sz > strng.size() || sz == 0){
        return res;
      }
      int i, subsize, j;
      for(i=0; i<strng.size(); i+=sz){
        subsize = i+sz;
        if(subsize <= strng.size()){
          line = strng.substr(i, sz);
          if(divisible(line, mp)){
            for(j=line.size()-1; j>-1; j--){
              res += line[j];
            }
          }else{
            for(j=1; j<line.size(); j++){
              res += line[j];
            }
            res += line[0];
          }
        }
      }
      return res;
    }
};
