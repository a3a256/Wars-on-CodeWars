std::string pattern(int n)
{
  if(n<=0){
    return "";
  }
  std::string temp = "", line, res;
  res = "";
  int i, val, left, right;
  for(i=0; i<(n*2)-1; i++){
    temp += ' ';
  }
  for(i=0; i<n; i++){
    val = i+1;
    line = temp;
    left = n-1;
    right = n-1;
    while(val>0){
      line[left] = '0'+val%10;
      line[right] = '0'+val%10;
      left--;
      right++;
      val--;
    }
    res += line + '\n';
  }
  for(i=n-1; i>0; i--){
    val = i;
    line = temp;
    left = n-1;
    right = n-1;
    while(val>0){
      line[left] = '0'+val%10;
      line[right] = '0'+val%10;
      left--;
      right++;
      val--;
    }
    res += line + '\n';
  }
  res.pop_back();
  return res;
}
