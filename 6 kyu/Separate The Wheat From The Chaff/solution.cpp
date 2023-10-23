#include <vector>

using namespace std ; 

vector <long long int> wheatFromChaff (vector <long long int> values)
{
  int i, j;
  long long int temp;
  vector<long long int> res;
  i = 0;
  j = values.size()-1;
  while(i<=j){
    if(values[i]>=0 && values[j]<0){
      temp = values[j];
      values[j] = values[i];
      values[i] = temp;
      i++;
      j++;
    }else if(values[i]>=0 && values[j]>=0){
      j--;
    }else{
      i++;
    }
  }
  return values;
}
