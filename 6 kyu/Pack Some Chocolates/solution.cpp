// return the number of small chocolates required to achieve 
// the desired goal. Return -1 if the goal cannot be achieved 
int make_chocolates(int small, int big, int goal) {
  int only_big = goal/5;
  if(only_big > big){
    only_big = big;
  }
  int remainder = goal - only_big*5;
  if(remainder%2 == 0){
    int smalls = remainder/2;
    if(smalls <= small){return smalls;}
  }
  while(only_big > 0){
    only_big -= 1;
    remainder = goal - only_big*5;
    if(remainder%2 == 0){
      int smalls = remainder/2;
        if(smalls <= small){return smalls;}
    }
  }
  return -1;
}
