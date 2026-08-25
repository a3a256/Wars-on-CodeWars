#include <string>

std::string multi_table(int number)
{
  int i;
  std::string res = "";
  for(i=1; i<11; i++){
    res += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(number*i) + "\n";
  }
  res.pop_back();
  return res; // good luck
}
