std::string doubles(std::string s){
  std::string res = "";
  while(!s.empty()){
    if(res.empty()){
      res += s[0];
    }else{
      if(res.back() == s[0]){
        res.pop_back();
      }else{
        res += s[0];
      }
    }
    s.erase(s.begin()+0);
  }
  return res;
}
