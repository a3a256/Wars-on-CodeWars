#include <string>
#include <map>

std::string add(const std::string& a, const std::string& b) {
  std::map<char, int> mp = {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6},
                      {'7', 7}, {'8', 8}, {'9', 9}};
  std::map<int, char> qp = {{0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'},
                      {7, '7'}, {8, '8'}, {9, '9'}};
  int coef = 0, add, i, j;
  char c;
  i = a.size()-1;
  j = b.size()-1;
  std::string res = "";
  while(i>-1 || j>-1){
    add = 0;
    if(i>-1){
      add += mp[a[i]];
    }
    if(j>-1){
      add += mp[b[j]];
    }
    add += coef;
    std::cout << " = " << add << '\n';
    coef = add/10;
    add = add%10;
    res += qp[add];
    i--;
    j--;
  }
  if(coef){
    res += '1';
  }
  i = 0;
  j = res.size()-1;
  while(i<j){
    c = res[i];
    res[i] = res[j];
    res[j] = c;
    i++;
    j--;
  }
  return res;
}
