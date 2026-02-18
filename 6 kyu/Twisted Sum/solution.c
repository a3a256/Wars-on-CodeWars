int compute_sum(int n) {
  int i, j, total;
  total = 0;
  for(i=1; i<=n; i++){
    j = i;
    while(j>0){
      total += j%10;
      j = j/10;
    }
  }
  return total;
}
