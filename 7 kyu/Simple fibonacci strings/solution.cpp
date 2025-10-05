std::string solve(int n){
  if(n == 0){return "0";}
  if(n == 1){return "01";}
  std::string first = "0", second = "01", temp;
  int i;
  for(i=1; i<n; i++){
    temp = second+first;
    first = second;
    second = temp;
  }
  return second;
}
