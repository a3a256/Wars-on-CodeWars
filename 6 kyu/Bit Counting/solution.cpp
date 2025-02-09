#include <iostream>
#include <bitset>

unsigned int countBits(unsigned long long n){
  std::string binary = std::bitset<512>(n).to_string();
  int count = 0;
  for(char c: binary){if(c == '1') count++;}
  return count;
}
