#include <cinttypes>
#include <queue>

uint64_t descendingOrder(uint64_t a)
{
  std::priority_queue<int> desc;
  while(a>0){
    desc.push(a%10);
    a = a/10;
  }
  uint64_t res = 0;
  while(desc.size() != 0){
    res += desc.top();
    desc.pop();
    if(desc.size() != 0){res *= 10;}
  }
  return res;
}
