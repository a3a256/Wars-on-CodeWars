#include <algorithm>

std::string solve(const std::string &s, unsigned k)
{
  std::string pr, change;
  pr = s;
  change = s;
  std::sort(pr.begin(), pr.end());
  if(k>=s.size()){
    return "";
  }
  int i, j;
  for(i=0; i<k; i++){
    for(j=0; j<change.size(); j++){
      if(change[j] == pr[0]){
        change.erase(change.begin()+j);
        pr.erase(pr.begin()+0);
        break;
      }
    }
  }
  return change;
}
