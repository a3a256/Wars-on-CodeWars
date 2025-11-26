#include <optional>
#include <string>
#include <cctype>

using str_t = std::string;
using opt_str_t = std::optional<str_t>;

opt_str_t generate_hashtag(const str_t& str) {
  str_t res = "#";
  str_t temp = "";
  int i;
  for(i=0; i<str.size(); i++){
    if(str[i] == ' '){
      if(temp.size() != 0){
        temp[0] = std::toupper(temp[0]);
        res += temp;
      }
      temp = "";
    }else{
      temp += std::tolower(str[i]);
    }
  }
  if(temp.size() != 0){temp[0] = std::toupper(temp[0]); res += temp;}
  if(res == "#" || res.size() > 140){return std::nullopt;}
  return res; // Your code goes here
}
