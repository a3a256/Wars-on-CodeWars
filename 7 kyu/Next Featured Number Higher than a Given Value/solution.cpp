#include <map>

long nextNumb(const long val) {
  long cur = val + 1;
  if(cur >= 999999999){return -1;}
  long n;
  int dups;
  std::map<int, int> mp;
  while(true){
    mp.clear();
    if(cur%2 != 0 && cur%3 == 0){
      n = cur;
      while(n>0){
        mp[n%10]++;
        n /= 10;
      }
      dups = 0;
      for(auto it: mp){
        if(it.second > 1){
          dups = 1;
        }
      }
      if(dups == 0){
        return cur;
      }
    }
    cur++;
  }
  return val;
}
