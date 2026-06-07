#include <vector>
#include <string>
char add_letters(std::vector<char> letters) {
  if(letters.empty()){return 'z';}
  std::string alp = " abcdefghijklmnopqrstuvwxyz";
  int pos = 0;
  for(char i: letters){
    pos += ((int)i - 'a')+1;
    if(pos >= 27){
      pos = pos%27 + 1;
    }
  }
  return alp[pos];
}
