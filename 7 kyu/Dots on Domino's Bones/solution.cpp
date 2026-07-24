int dots_on_domino_bones(int number)
{
  int i, j, res = 0;
  for(i=0; i<=number; i++){
    for(j=i; j<=number; j++){
      res += (i+j);
    }
  }
  return res;
}
