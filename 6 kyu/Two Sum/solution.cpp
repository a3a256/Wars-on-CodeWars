std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  unsigned int i, j;
  int sum;
  bool found = false;
  for(i=0; i<numbers.size(); i++){
    for(j=0; j<numbers.size(); j++){
      if(i != j){
        sum = numbers[i]+numbers[j];
        if(sum == target){
          found = true;
          break;
        }
      }
    }
    if(found){
      break;
    }
  }
  return {i, j};
}
