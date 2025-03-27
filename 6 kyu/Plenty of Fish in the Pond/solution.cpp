int fish(std::string shoal) {
  sort(shoal.begin(), shoal.end());
  int cur_size = 1, cur_points = 0, val, required = 4;
  for(char c: shoal){
    val = (int)c - 48;
    if(cur_size >= val){
      cur_points += (int)c - 48;
    }
    if(cur_points >= required){
      cur_points -= required;
      cur_size += 1;
      required += 4;
    }
  }
  return cur_size; 
}
