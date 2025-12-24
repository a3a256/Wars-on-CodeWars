int max_pizza(int cuts) {
  if(cuts<0){return -1;}
  int i, res;
  res = 1;
  for(i=1; i<=cuts; i++){
    res += i;
  }
  return res;
}
