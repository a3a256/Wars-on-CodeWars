#include <string>
#include <map>
#include <utility>
#include <cctype>

using namespace std;

string send_message(const string& message)
{
  string apostrophe = "'";
  map<char, pair<char, int>> mp = {{'.', {'1', 1}}, {',', {'1', 2}}, {'?', {'1', 3}}, {'!', {'1', 4}},
                                  {'a', {'2', 1}}, {'b', {'2', 2}}, {'c', {'2', 3}},
                                  {'d', {'3', 1}}, {'e', {'3', 2}}, {'f', {'3', 3}},
                                  {'g', {'4', 1}}, {'h', {'4', 2}}, {'i', {'4', 3}},
                                  {'j', {'5', 1}}, {'k', {'5', 2}}, {'l', {'5', 3}},
                                  {'m', {'6', 1}}, {'n', {'6', 2}}, {'o', {'6', 3}},
                                  {'p', {'7', 1}}, {'q', {'7', 2}}, {'r', {'7', 3}}, {'s', {'7', 4}},
                                  {'t', {'8', 1}}, {'u', {'8', 2}}, {'v', {'8', 3}},
                                  {'w', {'9', 1}}, {'x', {'9', 2}}, {'y', {'9', 3}}, {'z', {'9', 4}},
                                  {apostrophe[0], {'*', 1}}, {'-', {'*', 2}}, {'+', {'*', 3}}, {'=', {'*', 4}},
                                  {' ', {'0', 1}}};
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  bool upper = false;
  char val;
  int i, j;
  string res = "";
  for(i=0; i<message.size(); i++){
    if(alphabet.find(tolower(message[i])) != -1){
      if(message[i] == toupper(message[i])){
        if(!upper){
          res += '#';
        }
        upper = true;
      }else{
        if(upper){
          res += '#';
        }
        upper = false;
      }
    }
    val = tolower(message[i]);
    if(mp.find(val) != mp.end()){
      if(res.size() != 0){
        if(res.back() == mp[val].first){
          res += ' ';
        }
      }
      for(j=0; j<mp[val].second; j++){
        res += mp[val].first;
      }
    }else{
      if(res.size() != 0){
        if(val == res.back()){
          res += ' ';
        }
      }
      res += val;
      res += '-';
    }
  }
  return res;
}
