// Returns number of complete beeramid levels
int beeramid(double bonus, double price) {
  int levels = 0;
  if(bonus < 0){
    return 0;
  }
  int i = 1;
  double level_price;
  while(bonus > 0){
    level_price = i*i*price;
    bonus -= level_price;
    i++;
    levels++;
  }
  if(bonus < 0){
    levels --;
  }
  return levels;
}
