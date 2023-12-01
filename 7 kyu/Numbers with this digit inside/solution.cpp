bool present(long n, long x){
  long l;
  while(n!=0){
    l = n%10;
    if(l == x){
      return true;
    }
    n = n/10;
  }
  return false;
}

std::vector<long> numbersWithDigitInside(long x, long d)
{
  std::vector<long> result;
  long count = 0, sum = 0, product = 1, i;
  for(i=1; i<=x; i++){
    if(present(i, d)){
      count++;
      sum+=i;
      product*=i;
    }
  }
  result.push_back(count);
  result.push_back(sum);
  if(count == 0){
    product = 0;
  }
  result.push_back(product);
  return result;
}
