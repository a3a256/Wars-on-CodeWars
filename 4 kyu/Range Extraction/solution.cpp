#include <string>
#include <vector>
#include <map>
#include <cmath>

std::string range_extraction(std::vector<int> args) {
  int cur, prev, test;
  cur = args[0];
  prev = args[0];
  unsigned int i;
  std::map<int, int> mp;
  for(i=1; i<args.size(); i++){
    test = args[i];
    if(abs(test-prev) == 1){
      prev = test;
    }else{
      mp[cur] = prev;
      cur = test;
      prev = test;
    }
  }
  mp[cur] = prev;
  std::string line = "";
  for(auto it: mp){
    if(it.first == it.second){
      line += std::to_string(it.first);
      line += ',';
    }else if(abs(it.second-it.first) == 1){
      line += std::to_string(it.first);
      line += ',';
      line += std::to_string(it.second);
      line += ',';
    }else{
      line += std::to_string(it.first);
      line += '-';
      line += std::to_string(it.second);
      line += ',';
    }
  }
  line.pop_back();
  
  return line;
}
