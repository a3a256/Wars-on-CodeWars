#include <string>

bool password(const std::string &pwd)
{
  int lower_case = 0, upper_case = 0, number = 0, i;
  for(i=0; i<pwd.size(); i++){
    if(pwd[i] - '0' >= 0 && pwd[i] - '0' <= 9){
      number++;
    }else if(pwd[i] - 'a' >= 0 && pwd[i] - 'a' <= 25){
      lower_case++;
    }else if(pwd[i] - 'A' >= 0 && pwd[i] - 'A' <= 25){
      upper_case++;
    }
  }
  return lower_case > 0 && upper_case > 0 && number > 0 && pwd.size() > 7;
}
