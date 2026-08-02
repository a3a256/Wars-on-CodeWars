#include <string>

std::string cat_mouse(std::string x) {
  if(x.size() <= 5){return "Caught!";}
  return "Escaped!";
}
