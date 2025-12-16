bool are_coprime(unsigned int a, unsigned int b) {
  int i, j;
  for(i=2; i<=a; i++){
    for(j=2; j<=b; j++){
      if(a%i == 0 && b%j == 0 && i == j){
        return false;
      }
    }
  }
  return true;
}
