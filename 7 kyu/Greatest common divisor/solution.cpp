long long mygcd(long long a, long long b) {
  if(a == b){return a;}
  
  if(a>b){
    if(a%b == 0){return b;}
    
    return mygcd(b, a%b);
  }
  if(b%a == 0){return a;}
  return mygcd(a, b%a);
}
