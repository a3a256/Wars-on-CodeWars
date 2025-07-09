typedef unsigned long long ull;

ull divisible_count(ull x, ull y, ull k) {
  y = y/k;
  while(x%k != 0){
    x++;
  }
  x = x/k;
  return y-x+1;
}
