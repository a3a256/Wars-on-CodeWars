#include <bitset>
#include <string>

bool interlockable(unsigned long long a, unsigned long long b) {
  std::string one = std::bitset<64>(a).to_string();
  std::string two = std::bitset<64>(b).to_string();
  int i;
  for(i=0; i<64; i++){
    if(one[i] == '1' && one[i] == two[i]){return false;}
  }
  return true;
}
