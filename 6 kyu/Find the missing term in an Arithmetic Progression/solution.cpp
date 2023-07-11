#include <vector>
#include <algorithm>

static long findMissing(std::vector<long> list){
  long last = list[list.size()-1];
  long diff = last - list[list.size()-2];
  long first = list[0];
  while(first <= last || first >= last){
    if(std::find(list.begin(), list.end(), first) == list.end()){
      break;
    }else{
      first += diff;
    }
  }
  
  return first;
}
