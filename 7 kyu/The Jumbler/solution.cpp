#include <cstddef>
#include <vector>

unsigned jumbler(const std::vector<std::size_t>& indices) {
  std::vector<std::size_t> rep = indices;
  unsigned count, val;
  count = 0;
  while(rep[0] != 0){
    val = rep[rep[0]];
    rep.erase(rep.begin()+rep[0]);
    rep.insert(rep.begin(), val);
    count++;
  }
  return count;
}
