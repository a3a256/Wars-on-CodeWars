int nbDig(int n, int d) {
  long long i=0, res = 0, temp;
  for(i=0; i<=n; i++){
    temp = i*i;
    while(temp > 0){
      if(temp%10 == d){res++;}
      temp /= 10;
    }
  }
  if(d == 0){res++;}
  return res;
}
