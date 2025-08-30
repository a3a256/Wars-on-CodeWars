std::vector<int> digits(int n){
  std::vector<int> digits, res;
  while(n>0){
    digits.push_back(n%10);
    n = n/10;
  }
  int i, j;
  for(i=digits.size()-1; i>0; i--){
    for(j=i-1; j>-1; j--){
      res.push_back(digits[i]+digits[j]);
    }
  }
  return res;
}
