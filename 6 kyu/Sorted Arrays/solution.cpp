#include <queue>
int nthSmallest(std::vector<std::vector<int>> arr, int n)
{
  std::priority_queue<int> q;
  int i, j;
  for(i=0; i<arr.size(); i++){
    for(j=0; j<arr[i].size(); j++){
      q.push(arr[i][j]);
    }
  }
  while(q.size() > n){
    q.pop();
  }
  return q.top();
}
