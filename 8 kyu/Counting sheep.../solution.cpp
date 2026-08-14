#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int count = 0;
  for(bool i: arr){count += i;}
  return count;
}

