#include <string>
#include <vector>

std::string isSmooth(unsigned long n){
  std::vector<int> v;
  unsigned long coef = 2;
  while(n > 1){
    if(n%coef == 0){
      n = n/coef;
      v.push_back(coef);
    }else{
      coef++;
    }
  }
  if(coef == 2){
    return "power of 2";
  }else if(coef == 3){
    return "3-smooth";
  }else if(coef == 5){
    return "Hamming number";
  }else if(coef == 7){
    return "humble number";
  }
  return "non-smooth";
}
