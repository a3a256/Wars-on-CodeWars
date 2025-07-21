#include <string>
#include <map>
#include <algorithm>

std::string solution(int number){
  std::map<int, std::string> mp = {{1, "I"}, {4, "VI"}, {5, "V"}, {9, "XI"},
                                  {10, "X"}, {40, "LX"}, {50, "L"}, {90, "CX"},
                                  {100, "C"}, {400, "DC"}, {500, "D"}, {900, "MC"},
                                  {1000, "M"}};
  int n = number, index = 1, rem;
  std::string res = "";
  while(n>0){
    rem = n%10;
    if(mp.find(rem*index) != mp.end()){
      res += mp[rem*index];
    }else{
      if(rem == 2){res += mp[1*index]; res += mp[1*index];}
      else if(rem == 3){res += mp[1*index]; res += mp[1*index]; res+=mp[1*index];}
      else if(rem == 6){res+=mp[1*index];res+=mp[5*index];}
      else if(rem == 7){res+=mp[1*index];res+=mp[1*index];res+=mp[5*index];}
      else if(rem == 8){res+=mp[1*index];res+=mp[1*index];res+=mp[1*index];res+=mp[5*index];}
    }
    index *= 10;
    n = n/10;
  }
  std::reverse(res.begin(), res.end());
  return res;
}
