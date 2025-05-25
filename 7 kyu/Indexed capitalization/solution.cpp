#include <cctype>

std::string capitalize(std::string s, std::vector<int> idxs)
{
  int i;
  for(i=0; i<idxs.size(); i++){
    if(idxs[i] >= 0 && idxs[i] < s.size()){
      s[idxs[i]] = std::toupper(s[idxs[i]]);
    }
  }
  std::cout << '\n';
  return s;
}
