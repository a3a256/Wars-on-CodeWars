#include <string>
#include <algorithm>

std::string shorter_reverse_longer(const std::string& a, const std::string& b) {
  std::string longer, shorter;
  if(a.size() == b.size() || a.size() > b.size()){
    longer = a;
    shorter = b;
  }else{
    longer = b;
    shorter = a;
  }
  std::reverse(longer.begin(), longer.end());
  return shorter+longer+shorter;
}
