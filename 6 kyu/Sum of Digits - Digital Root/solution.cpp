int digits_sum(int n){
  int sum = 0;
  int starter = 10;
  while(n>0){
    sum += n%starter;
    n = n/starter;
  }
  
  return sum;
}

int digital_root(int n)
{
  int starter = 10;
  while(n/starter>0){
    n = digits_sum(n);
  }
  
  return n;
}
