typedef unsigned long long ull;

ull nth_fib(int n) {
  if(n == 1){
    return 0;
  }
  if(n == 2 || n == 3){
    return 1;
  }
  ull cur, prev, prev_prev, i;
  prev_prev = 1;
  prev = 1;
  cur = prev + prev_prev;
  i = 4;
  while(i<n){
    prev_prev = prev;
    prev = cur;
    cur = prev+prev_prev;
    i++;
  }
  return cur;
}
