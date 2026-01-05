#include <string>

int find(const std::string& str)
{
  int i, j, val;
  std::string temp;
  for(i=1; i<=str.size(); i++){
    temp = str.substr(0, i);
    val = std::stoi(temp);
    j = val+1;
    while(temp.size() < str.size()){
      temp += std::to_string(j);
      j++;
    }
    if(temp == str){
      return val;
    }
  }
  return 0;
}
