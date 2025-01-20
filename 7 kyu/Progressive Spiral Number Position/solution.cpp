int layers(int n)
{
  long long i, j = 1;
  i = j*j;
  while(i < n){
    j++;
    i = j*j;
  }
  long long layers = 1;
  long long start_val, coef;
  if(j%2 == 0){
    coef = 2;
    layers++;
  }else{
    coef = 1;
  }
  start_val = coef*coef;
  while(start_val < n){
    coef += 2;
    start_val = coef*coef;
    layers++;
  }
  return layers;
}
