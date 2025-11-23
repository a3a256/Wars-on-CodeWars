std::string pattern(int n)
{
  int i, j, start;
  std::string res = "";
  if(n<=0){return res;}
  for(i=1; i<=n; i++){
    for(start=i; start<=n; start++){
      res += std::to_string(start);
    }
    for(j=1; j<=i-1; j++){
      res += std::to_string(j);
    }
    res += '\n';
  }
  res.pop_back();
  return res;
}
