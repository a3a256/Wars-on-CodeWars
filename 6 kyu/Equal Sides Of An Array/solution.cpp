#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {
  int index;
  unsigned int i, j;
  int left, right;
  for(i=0; i<numbers.size(); i++){
    left = 0;
    for(j=0; j<i; j++){
      left += numbers[j];
    }
    right = 0;
    for(j=i+1; j<numbers.size(); j++){
      right += numbers[j];
    }
    if(left == right){
      return i;
    }
  }
  return -1;
}
