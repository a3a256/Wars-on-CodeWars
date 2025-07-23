#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int solution(string roman) {
  map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                      {'C', 100}, {'D', 500}, {'M', 1000}};
  int i, res, prev;
  res = 0;
  prev = 0;
  for(i=roman.size()-1; i>-1; i--){
    if(mp[roman[i]] >= prev){
      res += mp[roman[i]];
    }else{
      res -= mp[roman[i]];
    }
    prev = mp[roman[i]];
  }
  return res;
  return res;
}
