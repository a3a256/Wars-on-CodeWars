int prev_mult_of_three (int n) {
  while(n%3 != 0){
    n /= 10;
  }
  if(n == 0){return -1;}
  return n;
}
