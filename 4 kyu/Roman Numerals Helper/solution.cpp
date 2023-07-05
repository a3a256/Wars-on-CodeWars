#include <string>
#include <map>
#include <vector>
#include <algorithm>

class RomanHelper{
  public:
    std::map<int, char> mp;
    std::map<char, int> dp;
    std::string to_roman(unsigned int n){
      mp[1] = 'I';
      mp[5] = 'V';
      mp[10] = 'X';
      mp[50] = 'L';
      mp[100] = 'C';
      mp[500] = 'D';
      mp[1000] = 'M';
      std::vector<std::string> res;
      std::string line = "";
      unsigned int dec = 10;
      unsigned int leftover;
      unsigned int starter = 1;
      unsigned int i;
      while(n>0){
        leftover = n%dec;
        if(leftover != 0){
          if(leftover == starter*4 || leftover == starter*9){
            line += mp[starter];
            line += mp[leftover+starter];
            res.push_back(line);
            line = "";
          }else if(mp.find(leftover) != mp.end()){
            line += mp[leftover];
            res.push_back(line);
            line = "";
          }else if(leftover < starter*4){
            for(i=0; i<leftover/starter; i++){
              line += mp[starter];
            }
            res.push_back(line);
            line = "";
          }else if(leftover > starter*5 && leftover < starter*9){
            line += mp[starter*5];
            for(i=5; i<leftover/starter; i++){
              line += mp[starter];
            }
            res.push_back(line);
            line = "";
          }
        }
        starter *= 10;
        dec *= 10;
        n -= leftover;
      }
    line = "";
    std::reverse(res.begin(), res.end());
    for(i=0; i<res.size(); i++){
      line += res[i];
    }
    return line;
  }
    int from_roman(std::string rn){
      dp['I'] = 1;
      dp['V'] = 5;
      dp['X'] = 10;
      dp['L'] = 50;
      dp['C'] = 100;
      dp['D'] = 500;
      dp['M'] = 1000;
      std::vector<int> specials = {4, 9, 40, 90, 400, 900};
      unsigned int i;
      bool special = false;
      int num = 0;
      int diff;
      for(i=0; i<rn.size()-1; i++){
        diff = dp[rn[i+1]] - dp[rn[i]];
        if(std::find(specials.begin(), specials.end(), diff) != specials.end()){
          num += dp[rn[i+1]];
          num -= dp[rn[i]];
          special = true;
          i ++;
        }else{
          num += dp[rn[i]];
          special = false;
        }
      }
      if(i == rn.size()-1){
        num += dp[rn[i]];
      }
      return num;
    }
} RomanNumerals;
