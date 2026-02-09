long long rowSumOddNumbers(unsigned n){
  int row, end;
  long long cur = 1, sum = 0;
  for(row=1; row<=n; row++){
    for(end = 0; end<row; end++){
      if(row == n){
      sum += cur;}
      cur += 2;
    }
  }
  return sum;
}
