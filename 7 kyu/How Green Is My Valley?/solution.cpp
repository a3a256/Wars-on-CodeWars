#include <algorithm>

struct cmp{
  inline bool operator() (int &a, int &b){
    return b<a;
  }
};

class Valley
{
public:
    static std::vector<int> makeValley(std::vector<int> &arr){
      std::sort(arr.begin(), arr.end(), cmp());
      std::vector<int> right, left;
      int i;
      for(i=0; i<arr.size(); i++){
        if(i%2 == 0){
          right.push_back(arr[i]);
        }else{
          left.insert(left.begin(), arr[i]);
        }
      }
      right.insert(right.end(), left.begin(), left.end());
      return right;
    }
};

