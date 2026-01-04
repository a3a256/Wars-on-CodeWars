#include <set>
#include <queue>

std::vector<int> testit(std::vector<int> a, std::vector<int> b)
{
  std::set<int> st1, st2;
  int i = 0;
  while(i < a.size() || i < b.size()){
    if(i<a.size()){
      st1.insert(a[i]);
    }
    if(i<b.size()){
      st2.insert(b[i]);
    }
    i++;
  }
  std::priority_queue<int,std::vector<int>, std::greater<int> >q;
  std::vector<int> res;
  for(auto it: st1){q.push(it);}
  for(auto it: st2){q.push(it);}
  while(!q.empty()){res.push_back(q.top());q.pop();}
  return res;
}
