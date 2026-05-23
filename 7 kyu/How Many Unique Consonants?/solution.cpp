#include <string>
#include <set>
#include <cctype>

unsigned int countConsonants(const std::string& str){
  std::string alp = "bcdfghjklmnpqrstvwxyz";
  int found;
  std::set<char> stk;
  for(char c: str){
    found = 0;
    c = std::tolower(c);
    for(char t: alp){
      if(t == c){
        found = 1;
        break;
      }
    }
    if(found){stk.insert(c);}
  }
  return (int)stk.size();
}
