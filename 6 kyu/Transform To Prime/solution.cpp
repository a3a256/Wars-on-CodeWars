#include <vector>
#include <numeric>
#include <math.h>

using namespace std;

bool is_prime(int n){
  if(n<=1){
    return false;
  }
  int i;
  for(i=2; i<=sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int minimumNumber (vector <int> numbers )
{
  int sum = accumulate(numbers.begin(), numbers.end(), 0);
  bool prime = is_prime(sum);
  int v = 0;
  while(true){
    if(prime){
      break;
    }else{
      if(v > 0){
        numbers.pop_back();
      }
      v ++;
      numbers.push_back(v);
    }
    sum = accumulate(numbers.begin(), numbers.end(), 0);
    prime = is_prime(sum);
  }
  return v;
}
