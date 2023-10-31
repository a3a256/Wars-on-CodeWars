#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
      std::map<int, int> mp;
      int i;
      for(i=0; i<a.size(); i++){
        mp[a[i]*a[i]]++;
      }
      for(i=0; i<b.size(); i++){
        if(mp.find(b[i]) == mp.end() || mp[b[i]] == 0){
          return false;
        }
        mp[b[i]]--;
      }
      for(auto it: mp){
        if(it.second != 0){
          return false;
        }
      }
      return true;
    }
};
