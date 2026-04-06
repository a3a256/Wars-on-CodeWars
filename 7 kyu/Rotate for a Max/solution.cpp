#include <vector>
#include <algorithm>

class MaxRotate
{
public:
  static long long maxRot(long long n){
    long long biggest = n, cur;
    std::vector<int> v;
    while(n>0){
      v.push_back(n%10);
      n/=10;
    }
    int i, j;
    std::reverse(v.begin(), v.end());
    for(i=0; i<v.size(); i++){
      v.push_back(v[i]);
      v.erase(v.begin()+i);
      cur = 0;
      for(j=0; j<v.size(); j++){
        cur += v[j];
        if(j<v.size()-1){
          cur *= 10;
        }
      }
      if(cur > biggest){biggest = cur;}
    }
    return biggest;
  }
};
