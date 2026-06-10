int twice_as_old(int dad, int son) {
  int ans = son*2;
  ans = dad - ans;
  if(ans < 0){ans *= (-1);}
  return ans;
}
