int persistence(long long n){
  int start = 1, cur, test, count;
  cur = n;
  count = 0;
  while(cur>=10){
    count++;
    test = cur;
    start = 1;
    while(test > 0){
      start = start*(test%10);
      test = test/10;
    }
    cur = start;
  }
  return count;
}
