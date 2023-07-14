#include <string>
#include <stdlib.h>

std::string catMouse(std::string field, unsigned int jump){
  char cat = 'C';
  char dog = 'D';
  char mouse = 'm';
  size_t cp, dp, mp;
  cp = field.find(cat);
  mp = field.find(mouse);
  dp = field.find(dog);
  if(cp == std::string::npos || mp == std::string::npos || dp == std::string::npos){
    return "boring without all three";
  }
  int diff = abs(static_cast<int>(cp) - static_cast<int>(mp))-1;
  if(diff > jump){
    return "Escaped!";
  }
  if(static_cast<int>(dp) > static_cast<int>(mp) && static_cast<int>(dp) < static_cast<int>(cp)){
    return "Protected!";
  }
  if(static_cast<int>(dp) < static_cast<int>(mp) && static_cast<int>(dp) > static_cast<int>(cp)){
    return "Protected!";
  }
  
  return "Caught!";
}
