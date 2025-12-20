std::string cleanString(const std::string &s) {
  std::string res = "";
  int i;
  for(i=0; i<s.size(); i++){
    if(s[i] == '#' && res.size() > 0){
      res.pop_back();
    }else if(s[i] != '#'){
      res.push_back(s[i]);
    }
  }
  return res;
}
