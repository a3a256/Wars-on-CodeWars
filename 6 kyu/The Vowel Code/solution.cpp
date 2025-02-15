#include <string>
#include <map>

std::string encode(const std::string &str) {
  std::map<char, char> mp = {{'a', '1'},
                            {'e', '2'},
                            {'i', '3'},
                            {'o', '4'},
                            {'u', '5'}};
  int i;
  std::string line = "";
  for(i=0; i<str.size(); i++){
    if(mp.find(str[i]) != mp.end()){
      line += mp[str[i]];
    }else{
      line += str[i];
    }
  }
  return line;
}

std::string decode(const std::string &str) {
  std::map<char, char> mp = {{'1', 'a'},
                            {'2', 'e'},
                            {'3', 'i'},
                            {'4', 'o'},
                            {'5', 'u'}};
  int i;
  std::string line = "";
  for(i=0; i<str.size(); i++){
    if(mp.find(str[i]) != mp.end()){
      line += mp[str[i]];
    }else{
      line += str[i];
    }
  }
  return line;
}
