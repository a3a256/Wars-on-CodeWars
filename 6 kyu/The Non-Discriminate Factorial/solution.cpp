int factorial(int n) {
  int i, coef, cur;
  if(n>0){
    coef = -1;
  }else{
    coef = 1;
  }
  cur = 1;
  for(i=n; i!=0; i += coef){
    cur = cur*i;
  }
  return cur;
}
