#include <string>
#include <math.h>

std::string flyBy(std::string lamp, std::string drone){
  int sz = std::min((int)lamp.size(), (int)drone.size());
  int i;
  for(i=0; i<sz; i++){
    lamp[i] = 'o';
  }
  return lamp;
}
