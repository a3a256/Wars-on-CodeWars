#include <string>
#include <cctype>

bool is_vowel(char c){
  c = std::tolower(c);
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string kaCokadekaMe(std::string word)
{
  std::string res = "";
  int i;
  char prev;
  for(i=word.size()-1; i>-1; i--){
    if(i == word.size()-1 && is_vowel(word[i])){
      res += word[i];
    }else{
      if(is_vowel(word[i]) && !is_vowel(prev)){
        res = "ka" + res;
      }
      res = word[i] + res;
    }
    prev = word[i];
  }
  res = "ka" + res;
  return res;
}
