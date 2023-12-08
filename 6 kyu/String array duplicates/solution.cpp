std::vector<std::string> dup(std::vector<std::string> arr){    
  std::vector<std::string> res;
  std::string line = "";
  for(std::string s: arr){
    for(char c: s){
      if(line.size() == 0){
        line += c;
      }else{
        if(line.back() != c){
          line += c;
        }
      }
    }
    res.push_back(line);
    line = "";
  }
  return res;
}
