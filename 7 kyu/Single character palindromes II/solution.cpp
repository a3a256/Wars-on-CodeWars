bool solve(std::string s){
  std::string left = "", right= "";
  int length = (int)s.size();
  int mid = length/2;
  int i, j, count;
  for(i=0; i<mid; i++){
    left += s[i];
  }
  if(length%2 != 0){mid++;}
  for(i=s.size()-1; i>=mid; i--){
    right += s[i];
  }
  if(length%2 == 0 && left == right){return false;}
  if(length%2 != 0 && left == right){return true;}
  j = s.size()-1;
  count = 0;
  for(i=0; i<left.size(); i++){
    count += s[i] != s[j];
    j--;
  }
  return count == 1;
}
