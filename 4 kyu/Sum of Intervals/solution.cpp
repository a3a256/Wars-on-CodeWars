#include <vector>
#include <utility>
#include <algorithm>
#include <stack>
#include <numeric>

struct compare{
  inline bool operator() (std::pair<int, int> &a, std::pair<int, int> &b){
    return (a.first<b.first);
  }
};

int sum_intervals(std::vector<std::pair<int, int>> intervals) {
  std::sort(intervals.begin(), intervals.end(), compare());
  std::stack<std::pair<int, int>> stk;
  int i, sum;
  for(i=0; i<intervals.size(); i++){
    if(stk.empty()){
      stk.push(intervals[i]);
    }else{
      if(stk.top().second >= intervals[i].first){
        if(stk.top().second <= intervals[i].second){
          stk.top().second = intervals[i].second;
        }
      }else{
        stk.push(intervals[i]);
      }
    }
  }
  sum = 0;
  while(!stk.empty()){
    sum += stk.top().second - stk.top().first;
    stk.pop();
  }
  return sum;
}
