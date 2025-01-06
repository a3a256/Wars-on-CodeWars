#include <string>

std::string Palindromization(const std::string &elements, int n){
  if(n<2 || elements.size() == 0){
    return "Error!";
  }
  std::string res = "";
  int i = 0, end;
  while(res.size() != n/2){
    if(i == elements.size()){
      i = 0;
    }
    res += elements[i];
    i++;
  }
  end = res.size()-1;
  if(n%2 != 0){
    if(i == elements.size()){
      i = 0;
    }
    res += elements[i];
  }
  while(res.size() < n){
    res += res[end];
    end--;
  }
  return res;
}
