#include <string>
#include <algorithm>
long long shiftLeft(std::string s, std::string t){
  while(s.back() == t.back() && !s.empty() && !t.empty()){
    s.pop_back();
    t.pop_back();
  }
  return s.size() + t.size();
}
