#include <vector>
#include <utility>
#include <cstdint>
#include <math.h>

using namespace std;

uint64_t lcm(uint64_t a, uint64_t b) {
  
  if(a == 0 && b == 0){return 0;}
    
    // larger value
    long long g = max(a, b);
    
    // Smaller value
    long long s = min(a, b);
    
    for (uint64_t i = g; i <= a * b; i += g) {
        if (i % s == 0)
            return i;
    }
  return 0;
}

uint64_t sum_differences_between_products_and_LCMs(const vector<pair<uint64_t, uint64_t>>& pairs)
{
  uint64_t res = 0;
  for(int i=0; i<pairs.size(); i++){
    res += (pairs[i].first * pairs[i].second) - (lcm(pairs[i].first, pairs[i].second));
  }
  return res; // Do your magic!
}
