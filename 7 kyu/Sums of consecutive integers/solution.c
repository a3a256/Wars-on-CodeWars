int position(int x, int y, int n) {
  int start, end, total, index, res, coef;
  start = 0;
  end = x-1;
  total = ((start+end)*x)/2;
  coef = 1;
  if(y<x){
    coef = -1;
  }
  while(total != y){
    start += coef;
    end += coef;
    total = ((start+end)*x)/2;
  }
  res = start;
  index = 0;
  while(index != n){
    index++;
    res++;
  }
  return res;
}
