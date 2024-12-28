#include <string>

std::string arithmeticSequenceElements(int a, int d, int n)
{
  int i, val;
  val = a;
  std::string line = "";
  for(i=0; i<n; i++){
    line += std::to_string(val);
    line += ", ";
    val += d;
  }
  line.pop_back();
  line.pop_back();
  return line;
}
