#include <string>
#include <bitset>

std::string whitespace_number(int n)
{
  if(n == 0){
    return " \n";
  }
  std::string res = "";
  if(n<0){
    n = n*(-1);
    res += '\t';
  }else{
    res += ' ';
  }
  std::string binary = std::bitset<32>(n).to_string();
  while(binary[0] == '0'){
    binary.erase(binary.begin());
  }
  int i;
  for(i=0; i<binary.size(); i++){
    if(binary[i] == '1'){
      res += '\t';
    }else{
      res += ' ';
    }
  }
  res += '\n';
  return res;
}
