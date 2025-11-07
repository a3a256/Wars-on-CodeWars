int sum_digits(int n) {
  int coef = 1;
  if(n<0){coef = -1;}
  int total = 0;
  while(n!=0){
    total += (n%10)*coef;
    n = n/10;
  }
  return total;
}
