#include <string>
#include <algorithm>

class Carboat
{

  public:
  static std::string howmuch(int m, int n){
    int start, end, i, b, c;
    start = std::min(m, n);
    end = std::max(m, n);
    std::string s = "";
    for(i=start; i<=end; i++){
      b = i-2;
      c = i-1;
      if(b%7 == 0 && c%9 == 0){
        s += "[M: ";
        s += std::to_string(i);
        s += " B: ";
        s += std::to_string(b/7);
        s += " C: ";
        s += std::to_string(c/9);
        s += ']';
      }
    }
    s = '[' + s + ']';
    return s;
  }
};
