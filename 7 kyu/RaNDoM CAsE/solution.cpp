#include <string>
#include <algorithm>
#include <random>
#include <vector>
#include <ctype.h>

std::string randomCase(std::string x) {
  std::vector<int> res;
  int i;
  double r = ((double) rand() / (RAND_MAX)) + 1;
  for(i=0; i<x.size(); i++){
    r = ((double) rand() / (RAND_MAX)) + 1;
    if(r > 1.5f){
      x[i] = std::toupper(x[i]);
    }else{
      x[i] = std::tolower(x[i]);
    }
  }
  return x;
}
