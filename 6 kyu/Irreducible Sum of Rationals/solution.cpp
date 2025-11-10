#include <utility>

class SumFractions
{
public:
    static std::pair <int, int> sumFracts(std::vector<std::vector<int>> &l){
      if(l.size() == 0){return {0, 1};}
      int max_lower = 0;
      int i;
      for(i=0; i<l.size(); i++){
        if(l[i][1] > max_lower){
          max_lower = l[i][1];
        }
      }
      int cur = max_lower;
      bool check = false;
      while(!check){
        check = true;
        for(i=0; i<l.size(); i++){
          if(cur%l[i][1] != 0){
            check = false;
            cur += max_lower;
            break;
          }
        }
      }
      int diff, total;
      total = 0;
      for(i=0; i<l.size(); i++){
        diff = cur/l[i][1];
        total += l[i][0]*diff;
      }
      int first = total, second = cur;
      int flag = 2;
      while(flag <= second){
        if(first%flag == 0 && second%flag == 0){
          first /= flag;
          second /= flag;
        }else{
          flag++;
        }
      }
      return {first, second};
    }
};
