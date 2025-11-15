int dontGiveMeFive(int start, int end)
{
  int i, n, count, five;
  count = 0;
  for(i=start; i<=end; i++){
    n = i;
    five = 0;
    while(n!=0){
      if(n%10 == 5 || n%10 == -5){five = 1; break;}
      n = n/10;
    }
    if(five == 0){count++;}
  }
  return count;
}
