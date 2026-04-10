#include <vector>
#include <queue>

using namespace std; 

int maxTriSum (vector <int> numbers)
{
  priority_queue<int> q;
  for(int i: numbers){
    q.push(i);
  }
  int first = q.top();
  q.pop();
  int second = 0;
  while(!q.empty()){
    if(q.top() != first){
      second = q.top();
      break;
    }
    q.pop();
  }
  int third = 0;
  while(!q.empty()){
    if(q.top() != second){
      third = q.top();
      break;
    }
    q.pop();
  }
  return first + second + third;
}
