// optimize
long long find_x(int n) {
  long long x = 0;
  long long end_dest = 2*(long long)n;
  long long j = (long long)n*(2*(long long)n - 1);
  for (long long i = 0; i < n; i++) {
    x += i*end_dest + j;
  }
  return x;
}
