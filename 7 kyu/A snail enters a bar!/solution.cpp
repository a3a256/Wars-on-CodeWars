bool canSnailReachEnd(double length, double speed, double lengthIncreases)
{
  if(lengthIncreases >= speed){return false;}
  int steps = 0;
  double cur = 0.0;
  while(cur < length){
    cur += speed;
    length == lengthIncreases;
    steps++;
  }
  return steps <= 525600;
}
