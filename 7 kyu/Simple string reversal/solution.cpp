std::string solve(std::string s){
  int i, j;
  i = 0;
  j = s.size()-1;
  char c;
  while(i<=j){
    if(s[i] != ' ' && s[j] != ' '){
      c = s[i];
      s[i] = s[j];
      s[j] = c;
      i++;
      j--;
    }else if(s[i] == ' '){
      i++;
    }else if(s[j] == ' '){
      j--;
    }
  }
  return s;
}
