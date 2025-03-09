//  do not allocate memory
//  return a string literal

const char *even_or_odd(const char *digits) {
  int odds, evens, i, val;
  odds = 0;
  evens = 0;
  for(i=0; digits[i] != '\0'; i++){
    val = (int)digits[i] - 48;
    if(val >= 0 && val <= 9){
      if(val%2 == 0){
        evens += val;;
      }else{
        odds += val;
      }
    }
  }
  if(evens > odds){
    return "Even is greater than Odd";
  }
  if(odds > evens){
    return "Odd is greater than Even";
  }
  return "Even and Odd are the same";
}
