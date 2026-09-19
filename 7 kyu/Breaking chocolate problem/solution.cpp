int break_chocolate(int n, int m){
  int res = ((n-1)*m)+(m-1);
  return (res < 0)?0:res;
}
