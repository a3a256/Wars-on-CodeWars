std::string solve(std::string s){
  while(s.back() == ')'){
    s.pop_back();
  }
  std::string res = "";
  std::string bac = "";
  int n, i;
  while(s.size() != 0){
    while(s.back() != '('){
      res = s.back() + res;
      s.pop_back();
    }
    s.pop_back();
    n = (int)s.back() - 48;
    bac = res;
    if(n >= 0 && n <= 9){
      for(i=0; i<n-1; i++){
        res += bac;
      }
    }else{
      res = s.back() + res;
    }
    s.pop_back();
  }
  return res;
}
