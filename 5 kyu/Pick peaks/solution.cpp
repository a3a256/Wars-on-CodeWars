#include <vector>

PeakData pick_peaks(const std::vector<int> &v) {
  PeakData result;
  bool up = true, down=true, steep, same;
  int i, j;
  for(i=1; i<v.size(); i++){
    if(v[i] < v[i-1]){
      up = false;
    }
  }
  if(up){
    return result;
  }
  for(i=1; i<v.size(); i++){
    if(v[i]>v[i-1]){
      down = false;
    }
  }
  if(down){
    return result;
  }
  for(i=1; i<v.size()-1; i++){
    if(v[i] > v[i-1] && v[i] >= v[i+1]){
      steep = false;
      same = true;
      for(j=i; j<v.size(); j++){
        if(v[j] > v[i]){
          steep = true;
          same = false;
          break;
        }else if(v[j]<v[i]){
          steep = false;
          same = false;
          break;
        }
      }
      if(!steep && !same){
        result.pos.push_back(i);
        result.peaks.push_back(v[i]);
      }
    }
  }
  std::cout << "\n";
  return result;
}
