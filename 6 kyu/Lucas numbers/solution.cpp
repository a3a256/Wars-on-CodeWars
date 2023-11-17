long long int lucasnum(int n){
  if(n == 0){
    return 2;
  }
  if(n == 1){
    return 1;
  }
  long long int first = 2, second = 1, start, index, third;
  if(n<0){
    start = 0;
    index = -1;
  }else{
    start = 1;
    index = 1;
  }
  while(start != n){
    third = second + index*first;
    start += index;
    if(n>0){
      first = second;
      second = third;
    }else{
      second = first;
      first = third;
    }
  }
  return third;
}
