#include <string>
#include <map>
#include <cctype>

bool is_pangram(const std::string& s) {
  std::map<char, int> mp;
  char k;
  int i;
  for(char c: s){
    k = std::tolower(c);
    i = (int)k - 'a';
    if(i>=0 && i<26){
      mp[k]++;
    }
  }
  return mp.size() == 26;
}
