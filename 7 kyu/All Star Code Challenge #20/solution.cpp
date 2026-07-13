#include <vector>
#include <stdexcept>
using namespace std;

template<class T>
vector<T> add_arrays(const vector<T>& array1, const vector<T>& array2) {
  if(array1.size() != array2.size()){throw invalid_argument("Error");}
  vector<T> res;
  int i;
  for(i=0; i<array1.size(); i++){
    res.push_back(array1[i]+array2[i]);
  }
  return res; // your code goes here
}
