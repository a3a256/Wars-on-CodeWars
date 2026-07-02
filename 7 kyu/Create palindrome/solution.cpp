bool solve(std::string st) {
  int i, j, left, right, diff;
  i = 0;
  j = st.size()-1;
  while(i<j){
    left = st[i] - 'a';
    right = st[j] - 'a';
    diff = left - right;
    if(diff <= -3 || diff >= 3){
      return false;
    }else if(diff == -1 || diff == 1){
      return false;
    }
    i++;
    j--;
  }
  return true;
}
