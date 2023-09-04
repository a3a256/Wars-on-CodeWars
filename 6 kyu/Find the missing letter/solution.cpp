#include <vector>
#include <string>

char findMissingLetter(const std::vector<char>& chars)
{
  int last, prev, cur;
  last = int(chars.back());
  prev = int(chars[0]);
  unsigned int i;
  for(i=1; i<chars.size(); i++){
    cur = int(chars[i]);
    if(cur - prev != 1){
      return char(cur-1);
    }
    prev = cur;
  }
  return char(last+1);
}
