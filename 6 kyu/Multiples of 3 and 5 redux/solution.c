typedef unsigned long long ull;

ull solution(unsigned n) {
  ull i, total, nums, sub;
  i = n-1;
  sub = 0;
  total = 0;
  while(i%3 != 0){
    i --;
  }
  nums = i/3;
  total += ((3+i)*nums)/2;
  i = n-1;
  while(i%5 != 0){
    i --;
  }
  nums = i/5;
  total += ((5+i)*nums)/2;
  for(i=0; 15*i<n; i++){
    sub += 15*i;
  }
  total -= sub;
  return total;
}
