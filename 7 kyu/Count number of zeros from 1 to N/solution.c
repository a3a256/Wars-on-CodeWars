unsigned count_zeros(unsigned n) {
  unsigned i, j, count;
  count = 0;
  for(i=1; i<=n; i++){
    j = i;
    while(j>0){
      if(j%10 == 0){
        count++;
      }
      j = j/10;
    }
  }
  return count;
}
