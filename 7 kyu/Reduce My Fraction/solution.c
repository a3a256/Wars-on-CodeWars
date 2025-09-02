typedef struct Fraction {
  int numerator;
  int denominator;
} pair;

pair my_fraction(pair fraction) {
  int start_value, res;
  if(fraction.numerator > fraction.denominator){
    start_value = fraction.denominator;
  }else{
    start_value = fraction.numerator;
  }
  while(start_value > 0){
    if(fraction.numerator%start_value == 0 && fraction.denominator%start_value == 0){
      fraction.numerator /= start_value;
      fraction.denominator /= start_value;
      break;
    }
    start_value -= 1;
  }
  return fraction;
}
