#include <vector>

using namespace std; 

vector <int> productArray (vector <int> numbers)
{
  int total = 1, i, zeros = 0;
  for(i=0; i<numbers.size(); i++){
    if(numbers[i] == 0){
      zeros++;
    }else{
      total *= numbers[i];
    }
  }
  if(zeros > 1){
    for(i=0; i<numbers.size(); i++){
      numbers[i] = 0;
    }
    return numbers;
  }
  for(i=0; i<numbers.size(); i++){
    if(numbers[i] == 0 && zeros == 1){
      numbers[i] = total;
    }else{
      numbers[i] = total/numbers[i];
    }
  }
  return numbers;
}
