#include <vector>
#include <algorithm>
class Opstrings
{
public:
    static std::string vertMirror(const std::string &strng);
	  static std::string horMirror(const std::string &strng);
    // your high order function oper
    //... oper(...);
    static std::string oper(std::string (*f)(const std::string &str), const std::string &s);

};

std::string Opstrings::vertMirror(const std::string &strng){
  std::string res = "", s;
  s = "";
  for(char c: strng){
    if(c == '\n'){
      res += s;
      res += '\n';
      s = "";
    }else{
      s = c + s;
    }
  }
  if(s.size() != 0){
    res += s;
  }
  return res;
}

std::string Opstrings::horMirror(const std::string &strng){
  std::string res = "", s;
  s = "";
  int i;
  for(i=strng.size()-1; i>-1; i--){
    if(strng[i] == '\n'){
      res += s;
      res += '\n';
      s = "";
    }else{
      s = strng[i] + s;
    }
  }
  if(s.size() != 0){
    res += s;
  }
  return res;
}

std::string Opstrings::oper(std::string (*f)(const std::string &str), const std::string &s){
  return f(s);
}
