#include <algorithm>

std::string solve(std::string s, int a, int b){
  int cap = b;
  if(cap < s.size()){
    cap ++;
  }else if(cap > s.size()){
    cap = s.size();
  }
  std::reverse(s.begin()+a, s.begin()+cap);
  return s;
}
