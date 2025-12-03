#include <bitset>
#include <string>

int nextHigher(int value)
{
  std::string binary = std::bitset<32>(value).to_string();
  int i, total, temp;
  total = 0;
  for(char c: binary){
    if(c == '1'){
      total++;
    }
  }
  int res = -1;
  while(res != total){
    value++;
    binary = std::bitset<32>(value).to_string();
    temp = 0;
    for(char c: binary){
      if(c == '1'){temp++;}
    }
    res = temp;
  }
  return value;
}
