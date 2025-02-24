#include <string>

class Cubes
{
public:
  static bool is_cubic(std::string &t){
    int num, n, sub_total, md;
    sub_total = 0;
    num = std::stoi(t);
    n = num;
    while(n>0){
      md = n%10;
      sub_total += md*md*md;
      n = n/10;
    }
    return sub_total == num;
  }
  static std::string isSumOfCubes(std::string &str){
    std::string temp, line;
    temp = "";
    line = "";
    int v, total;
    total = 0;
    for(char c: str){
      v = (int)c - 48;
      if(v >= 0 && v <= 9){
        if(temp.size() == 3){
          if(is_cubic(temp)){
            v = std::stoi(temp);
            line += std::to_string(v) + ' ';
            total += std::stoi(temp);
          }
          temp = "";
        }
        temp += c;
      }else{
        if(temp.size() != 0){
          if(is_cubic(temp)){
            v = std::stoi(temp);
            line += std::to_string(v) + ' ';
            total += std::stoi(temp);
          }
        }
        temp = "";
      }
    }
    if(!temp.empty()){
      if(is_cubic(temp)){
        v = std::stoi(temp);
        line += std::to_string(v) + ' ';
        total += std::stoi(temp);
      }
    }
    if(line.size() == 0){
      return "Unlucky";
    }
    line += std::to_string(total) + ' ';
    line += "Lucky";
    return line;
  }
};
