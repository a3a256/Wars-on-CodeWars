#include <vector>

int common(std::vector<int> a, std::vector<int> b, std::vector<int> c) {
  int count = 0;
  int i, j, k;
  bool one, two;
  for(i=0; i<a.size(); i++){
    one = false;
    for(j=0; j<b.size(); j++){
      if(b[j] == a[i]){
        one = true;
        break;
      }
    }
    two = false;
    for(k=0; k<c.size(); k++){
      if(c[k] == a[i]){
        two = true;
        break;
      }
    }
    
    if(one && two){
      count += a[i];
      b.erase(b.begin()+j);
      c.erase(c.begin()+k);
    }
  }
  
  return count;
}
