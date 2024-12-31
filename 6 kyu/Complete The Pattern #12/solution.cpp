std::string pattern(int n)
{
  if(n<1){
    return "";
  }
  std::string temp = "", line, res = "";
  int i, left, right;
  for(i=0; i<(n*2)-1; i++){
    temp += ' ';
  }
  left = 0;
  right = temp.size()-1;
  for(i=1; i<=n; i++){
    line = temp;
    line[left] = '0' + i%10;
    line[right] = '0' + i%10;
    left++;
    right--;
    res += line + '\n';
  }
  left = (int)temp.size()/2;
  right = (int)temp.size()/2;
  left--;
  right++;
  for(i=n-1; i>0; i--){
    line = temp;
    line[left] = '0' + i%10;
    line[right] = '0' + i%10;
    left--;
    right++;
    res += line + '\n';
  }
  res.pop_back();
  return res;
}
