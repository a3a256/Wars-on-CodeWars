class Kata {
  public:
  static bool validate(long long int n) {
    int res = 0;
    int index = 1;
    int val;
    while(n>0){
      val = n%10;
      if(index%2 == 0){val *= 2;}
      if(val >= 10){val -= 9;}
      res += val;
      n = n/10;
      index++;
    }
    return res%10 == 0;
  }
};
