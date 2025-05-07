#include <string>
#include <vector>
using namespace std;

/*
* Takes a bottle_weight and scale of the bottle to its contents
* and returns the weight of its contents
* @param {int} bottleWeight:
*  The weight of the entire bottle and contents
* @param {string} scale:
*  A string comparing the weight of the bottle contents to the weight of the bottle by itself
*  Acceptable values: ('2 times larger', '4 times larger', '50 times smaller', etc..) 
*/
int content_weight(int bottle_weight, string scale)
{
  vector<string> v;
  string temp = "";
  int i;
  for(i=0; i<scale.size(); i++){
    if(scale[i] == ' '){
      v.push_back(temp);
      temp = "";
    }else{
      temp += scale[i];
    }
  }
  v.push_back(temp);
  int times = stoi(v[0]);
  for(i=0; i<=bottle_weight; i++){
    if(v.back() == "larger"){
      if(i/times + i == bottle_weight){
        return i;
      }
    }else{
      if(i*times + i == bottle_weight){
        return i;
      }
    }
  }
  return -1;
}
