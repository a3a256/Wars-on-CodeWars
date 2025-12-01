#include <map>
#include <cctype>

std::string vowelShift(std::string text, int n)
{
  std::string vowels = "aeiou";
  std::string present = "";
  for(char c: text){
    for(char t: vowels){
      if(std::tolower(c) == t){
        present += c;
        break;
      }
    }
  }
  int i, j, dir;
  dir = 1;
  if(n<0){dir = -1;}
  char last;
  for(i=0; i!=n; i += dir){
    if(dir == 1){
      present = present.back() + present;
      present.pop_back();
    }else{
      present += present[0];
      present.erase(present.begin()+0);
    }
  }
  j = 0;
  for(i=0; i<text.size(); i++){
    for(char c: vowels){
      if(std::tolower(text[i]) == c){
        text[i] = present[j];
        j++;
        break;
      }
    }
  }
  return text;
}
