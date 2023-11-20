#include <vector>
#include <algorithm>
using namespace std;

int twist(int n){
  int i, start = 1, dig, res;
  res = 0;
  bool neg = (n<0)?true:false;
  i = (n<0)?n*(-1):n;
  while(i>0){
    dig = i%10;
    if(dig == 3){
      dig = 7;
    }else if(dig == 7){
      dig = 3;
    }
    res += start*dig;
    start = start*10;
    i = i/10;
  }
  res = (neg)?res*(-1):res;
  return res;
}

vector <int> sortTwisted37 (vector <int> numbers) {
  vector<int> temp;
  vector<int> res;
  for(int i: numbers){temp.push_back(twist(i));}
  sort(temp.begin(), temp.end());
  for(int i: temp){res.push_back(twist(i));}
  return res;
}
