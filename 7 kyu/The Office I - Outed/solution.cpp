#include <string>
#include <map>
std::string outed(const std::map<std::string, int> &meet, const std::string &boss){
  int total = 0;
  for(auto it: meet){
    if(it.first == boss){
      total += it.second*2;
    }else{
      total += it.second;
    }
  }
  int res = total/(int)meet.size();
  if(total%meet.size() != 0){res++;}
  if(res <= 5){return "Get Out Now!";}
  return "Nice Work Champ!";
}
