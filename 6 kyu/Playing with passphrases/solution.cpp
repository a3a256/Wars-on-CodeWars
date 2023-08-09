#include <string>
#include <cctype>
#include <algorithm>

class PlayPass
{
  public:
  static std::string shift_chars(std::string& s, int n){
    int code;
    std::string alp = "abcdefghijklmnopqrstuvwxyz";
    std::string num = "0123456789";
    unsigned int i;
    for(i=0; i<s.size(); i++){
      if(alp.find(std::tolower(s[i])) != std::string::npos){
        code = int(s[i]);
        code += n;
        if(code > 90 || code > 122){
          code -= 26;
        }
        s[i] = char(code);
      }else if(num.find(s[i]) != std::string::npos){
        s[i] = std::to_string(9-(int(s[i])-48))[0];
      }
      if(i%2!=0){
        s[i] = std::tolower(s[i]);
      }
    }
    std::reverse(s.begin(), s.end());
    return s;
  }
  static std::string playPass(const std::string &s, int n){
    std::string change = s;
    return shift_chars(change, n);
  }
};
