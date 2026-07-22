# include <string>
# include <cctype>

std::string disemvowel(const std::string& str) {
  std::string res = "";
  int i;
  char c;
  for(i=0; i<str.size(); i++){
    c = std::tolower(str[i]);
    if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
      res += str[i];
    }
  }
  return res;
}
