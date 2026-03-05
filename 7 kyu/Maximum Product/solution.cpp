#include <vector>
#include <math.h>
#include <limits.h>

using namespace std; 

int adjacentElementsProduct(vector<int> inputArray){
  int res = INT_MIN, i;
  for(i=1; i<inputArray.size(); i++){
    res = max(res, inputArray[i]*inputArray[i-1]);
  }
  return res;
}
