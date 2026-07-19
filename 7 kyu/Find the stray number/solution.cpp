int stray(std::vector<int> numbers) {
  int i, vals = numbers[0], vals_count = 0, other;
  for(i=0; i<numbers.size(); i++){
    if(numbers[i] != vals){
      other = numbers[i];
    }else{
      vals_count++;
    }
  }
  if(vals_count == 1){return vals;}
  return other;
};
