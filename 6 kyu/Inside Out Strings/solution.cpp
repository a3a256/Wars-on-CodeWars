#include <string>

void process(std::string &val){
  int i, j;
  char c;
  i = 0;
  j = val.size()/2;
  j--;
  while(i<=j){
    c = val[i];
    val[i] = val[j];
    val[j] = c;
    i++;
    j--;
  }
  i = val.size()/2;
  if(val.size()%2 != 0){i++;}
  j = val.size()-1;
  while(i<=j){
    c = val[i];
    val[i] = val[j];
    val[j] = c;
    i++;
    j--;
  }
}

std::string insideOut(const std::string &x)
{
  std::string temp = "", res = "";
  for(char c: x){
    if(c == ' '){
      process(temp);
      res += temp;
      res += ' ';
      temp = "";
    }else{
      temp += c;
    }
  }
  process(temp);
  res += temp;
  return res;
}
