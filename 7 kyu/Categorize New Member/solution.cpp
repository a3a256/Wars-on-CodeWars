#include <string>
#include <vector>
#include <utility>

std::vector<std::string> openOrSenior(std::vector<std::pair<int, int>>& data)
{
  std::vector<std::string> res;
  for(auto it: data){
    if(it.first >= 55 && it.second > 7){
      res.push_back("Senior");
    }else{
      res.push_back("Open");
    }
  }
   return res; // TODO: your code here
}
