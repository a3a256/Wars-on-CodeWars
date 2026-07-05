#include <queue>

class Valley
{
public:
    static std::vector<int> makeValley(std::vector<int> &arr){
      std::priority_queue<int> q;
      std::vector<int> left, right;
      for(int i: arr){q.push(i);}
      int i = 0;
      while(!q.empty()){
        if(i%2 == 0){left.push_back(q.top());}
        else{right.insert(right.begin(), q.top());}
        q.pop();
        i++;
      }
      left.insert(left.end(), right.begin(), right.end());
      return left;
    }
};

