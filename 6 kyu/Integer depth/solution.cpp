unsigned integer_depth(unsigned n) {
  int arr[10];
  int i, val, rem, j;
  for(i=0; i<10; i++){
    arr[i] = -1;
  }
  bool clean = false;
  i = 1;
  while(!clean){
    clean = true;
    val = n*i;
    while(val > 0){
      rem = val%10;
      if(arr[rem] == -1){
        arr[rem] = 1;
      }
      val = val/10;
    }
    for(j=0; j<10; j++){
      if(arr[j] == -1){
        clean = false;
      }
    }
    i++;
  }
  return i-1;
}
