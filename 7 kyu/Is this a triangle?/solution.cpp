namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
    if(a >= b && a >= c){return b+c > a;}
    if(b >= a && b >= c){return a+c > b;}
    if(c >= a && c >= b){return a+b > c;}
    return false;
  }
};
