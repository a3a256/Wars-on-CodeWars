#include <bitset>
#include <string>
#include <cmath>

int flip_bit(int value, size_t index) {
  std::string binary = std::bitset<128>(value).to_string();
  if(binary[binary.size() - index] == '0'){
    binary[binary.size() - index] = '1';
  }else{
    binary[binary.size() - index] = '0';
  }
  int i, p, total;
  total = 0;
  p = 0;
  for(i=binary.size()-1; i>-1; i--){
    if(binary[i] == '1'){
      total += (int)std::pow(2, p);
    }
    p++;
  }
  return total;
}
