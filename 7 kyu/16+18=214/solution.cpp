#include <string>
unsigned add(unsigned x, unsigned y)
{
  unsigned m, n;
  std::string res = "";
  while(x > 0 || y > 0){
    m = 0;
    n = 0;
    if(x > 0){
      m = x%10;
      x /= 10;
    }
    if(y > 0){
      n = y%10;
      y/=10;
    }
    res = std::to_string(m+n) + res;
  }
  if(res == ""){return 0;}
  return std::stoi(res);
}
