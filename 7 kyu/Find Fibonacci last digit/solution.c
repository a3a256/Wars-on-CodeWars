unsigned get_last_digit(unsigned index) {
  if(index < 3){
    return 1;
  }
  unsigned long long first, second, temp, i;
  first = 1;
  second = 1;
  for(i=3; i<=index; i++){
    temp = first+second;
    first = second%10;
    second = temp%10;
  }
  return second;
}
