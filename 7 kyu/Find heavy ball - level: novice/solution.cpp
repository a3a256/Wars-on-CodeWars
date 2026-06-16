#include<vector>

unsigned int search(Scales scales, int start, int end){
  int mid = (end-start+1)/2;
  std::vector<int> left, right;
  int i;
  for(i=start; i<start+mid; i++){
    left.push_back(i);
  }
  for(i=start+mid; i<=end; i++){
    right.push_back(i);
  }
  int w = scales.getWeight(left, right);
  if(w == -1){
    if(left.size() == 1){return left[0];}
    return search(scales, left[0], left.back());
  }else if(w == 1){
    if(right.size() == 1){return right[0];}
    return search(scales, right[0], right.back());
  }
  return -1;
}

unsigned int findBall(Scales scales) {
  return search(scales, 0, 7);
}
