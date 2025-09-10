#include <string>

std::string autoMorphic(int number)
{
  long long val = (long long)number*(long long)number, cur=0, index = 1;
  while(cur < number){
    cur += val%10 * index;
    index *= 10;
    val /= 10;
  }
  if(cur == number){
    return "Automorphic";
  }
  return "Not!!";
}
