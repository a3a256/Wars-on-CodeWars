#include <string>
#include <algorithm>

bool validateBase(const std::string& num, unsigned int base) {
  char max_val = num[0];
  for(char c: num){
    max_val = std::max(max_val, c);
  }
  base -= 1;
  char c = '0';
  if(base < 10){
    c += base;
    return max_val <= c;
  }
  c = 'A';
  c += (base-10);
  return max_val <= c;
}
