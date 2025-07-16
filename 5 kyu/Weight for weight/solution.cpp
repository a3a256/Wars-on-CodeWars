#include <vector>
#include <algorithm>
#include <utility>

class WeightSort
{
public:
    struct cmp{
      inline bool operator() (std::pair<std::string, int> &a, std::pair<std::string, int> &b){
        if(a.second != b.second){
          return a.second < b.second;
        }
        return a.first < b.first;
      }
    };
    static std::string orderWeight(const std::string &strng){
      if(strng == ""){
        return strng;
      }
      std::vector<std::pair<std::string, int>> res;
      std::string temp = "";
      int val = 0, i;
      for(char c: strng){
        if(c == ' '){
          if(temp != ""){
            res.push_back({temp, val});
            val = 0;
            temp = "";
          }
        }else{
          temp += c;
          val += (int)c - '0';
        }
      }
      if(temp != ""){
        res.push_back({temp, val});
        val = 0;
        temp = "";
      }
      sort(res.begin(), res.end(), cmp());
      temp = "";
      for(i=0; i<res.size(); i++){
        temp += res[i].first;
        temp += ' ';
      }
      temp.pop_back();
      return temp;
    }
};
