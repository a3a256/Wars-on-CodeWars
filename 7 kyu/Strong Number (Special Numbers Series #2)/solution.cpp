#include <string>
using namespace std;

long long permutations(int num){
  long long i, total;
  total = 1;
  for(i=1; i<=num; i++){
    total = total*i;
  }
  return total;
}

string strong_num (int number )
{
  long long total = 0, n, backup;
  backup = number;
  while(number > 0){
    n = number%10;
    total += permutations(n);
    number = number/10;
  }
  if(total == backup){
    return "STRONG!!!!";
  }
  return "Not Strong !!"; 
}
