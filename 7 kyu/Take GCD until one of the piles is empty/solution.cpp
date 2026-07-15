int gcd_find(int a, int b){
  if(a == 0){return b;}
  return gcd_find(b%a, a);
}

int findGCD(const std::vector<int>& arr){
  int res = arr[0];
  int i;
  for(i=1; i<arr.size(); i++){
    res = gcd_find(arr[i], res);
    if(res == 1){return 1;}
  }
  return res;
}

long long calc(const std::vector<int> &x) {
  bool empty = false;
  std::vector<int> v = x;
  long long i, gcd = 0, res = 0;
  while(!empty){
    gcd = findGCD(v);
    for(i=0; i<v.size(); i++){
      v[i] -= gcd;
      res += gcd;
      if(v[i] == 0){
        empty = true;
      }
    }
  }
  return res;
}
