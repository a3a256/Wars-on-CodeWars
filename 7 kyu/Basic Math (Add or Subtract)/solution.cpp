#include <string>
#include <vector>

std::string calculate(std::string str)
{
  std::vector<int> v;
  std::vector<std::string> ops;
  int i = 0, val;
  std::string n = "";
  while(i<str.size()){
    val = (int)str[i] - '0';
    if(val >= 0 && val <= 9){
      n += str[i];
      i++;
    }else{
      if(str[i] == 'p'){
        ops.push_back("plus");
        v.push_back(std::stoi(n));
        i+=4;
      }else if(str[i] == 'm'){
        ops.push_back("minus");
        v.push_back(std::stoi(n));
        i+=5;
      }
      n = "";
    }
  }
  if(n.size() != 0){
    v.push_back(std::stoi(n));
  }
  int total = v[0];
  for(i=0; i<ops.size(); i++){
    if(ops[i] == "plus"){
      total += v[i+1];
    }else{
      total -= v[i+1];
    }
  }
  return std::to_string(total);
}
