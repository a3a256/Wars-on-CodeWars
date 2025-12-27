unsigned long long count_squares(int n) {
  unsigned long long cur = 1, i;
  for(i=2; i<=n; i++){
    cur = i*i + cur;
  }
  return cur;
}
