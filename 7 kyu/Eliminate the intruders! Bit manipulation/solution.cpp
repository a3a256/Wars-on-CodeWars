#include <string>

long eliminate_unset_bits(const std::string& number) {
  int n = 0;
  for(char c: number){n += c == '1';}
  long s = 1, i;
  for(i=0; i<n; i++){s *= 2;}
  return s-1; // TODO
}
