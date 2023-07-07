#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> rotate(const std::string& s) {
  unsigned int i;
  std::string line = s;
  std::vector<std::string> res;
  if(s.size() == 0){
    return res;
  }
  res.push_back(line);
  if(line.size() == 1){
    return res;
  }
  char c;
  for(i=0; i<line.size()-1; i++){
    c = line[line.size()-1];
    line.pop_back();
    line = c + line;
    std::cout << line << "\n";
    res.push_back(line);
  }
  std::reverse(res.begin(), res.end());
  return res;
}
