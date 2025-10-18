#include <string>
#include <cmath>

using namespace std; 

string jumpingNumber (int number)
{
  int prev = number%10, cur = 0;
  number = number/10;
  while(number>0){
    cur = number%10;
    if(abs(cur-prev) != 1){return "Not!!";}
    prev = cur;
    number /= 10;
  }
  return "Jumping!!";
}
