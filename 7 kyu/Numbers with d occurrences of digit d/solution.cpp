#include <map>

bool is_dd(int n){
  std::map<int, int> mp;
  while(n>0){
    mp[n%10]++;
    n /= 10;
  }
  for(auto it: mp){
    if(it.first == it.second){return true;}
  }
  return false;
}
