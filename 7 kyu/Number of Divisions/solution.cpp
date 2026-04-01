int divisions(const int& n, const int& divisor) {
  if(divisor <= 1){return -2147483648;}
  int t = n;
  int res = 0;
  while(t > 0){
    t /= divisor;
    res++;
  }
  res--;
  return res;
}
