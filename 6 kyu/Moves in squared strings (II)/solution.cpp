class Opstrings1
{
public:
    static std::string rot(const std::string &strng){
      std::string str = strng;
      std::reverse(str.begin(), str.end());
      return str;
    }
    static std::string selfieAndRot(const std::string &strng){
      std::string s, res, rev;
      s = "";
      res = "";
      int dots_count = 0;
      for(char c: strng){
        if(c == '\n'){
          break;
        }
        dots_count++;
      }
      std::string dots = "";
      for(int i=0; i<dots_count; i++){
        dots += '.';
      }
      for(char c: strng){
        if(c == '\n'){
          res += dots;
        }
        res += c;
      }
      res += dots + '\n' + dots;
      rev = rot(strng);
      for(char c: rev){
        res += c;
        if(c == '\n'){
          res += dots;
        }
      }
      return res;
    }
    static std::string oper(std::string(*f)(const std::string &str), const std::string &s){
      return f(s);
    }
};
