#include <vector>
#include <array>
#include <queue>

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
  std::priority_queue<int> q;
  for(int i: ages){q.push(i);}
  int first = q.top();
  q.pop();
  int second = q.top();
  return {second, first};
}
