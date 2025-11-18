#include <string>

std::string generate_shape(unsigned n)
{
  int i, j;
  std::string line = "";
  for(i=0; i<n; i++){
    line += '+';
  }
  line += '\n';
  std::string res = "";
  for(i=0; i<n; i++){
    res += line;
  }
  res.pop_back();
  return res;
}
