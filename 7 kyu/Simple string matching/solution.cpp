bool solve(std::string a, std::string b){
  std::cout << a << ' ' << b << '\n';
  int i, star = -1;
  std::string first = "", second = "";
  for(i=0; i<a.size(); i++){
    if(a[i] == '*'){
      star = i;
    }
    if(star == -1){
      first += a[i];
    }else if(star != -1 && a[i] != '*'){
      second += a[i];
    }
  }
  if(star == -1){
    return a == b;
  }
  size_t first_pos, second_pos;
  if(first != ""){
    first_pos = b.find(first);
    if(first_pos != 0){
      return false;
    }
    if(first_pos+first.size() != star){
      return false;
    }
  }
  if(second != ""){
    second_pos = b.find(second);
    if(second_pos == std::string::npos){
      return false;
    }
    if(second_pos+second.size() != b.size()){
      return false;
    }
  }
  return true;
}
