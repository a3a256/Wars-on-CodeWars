enum Outcome {
    Balance, Left, Right
};

enum Outcome balance(const char *left, const char *right) {
  int l, r, i;
  l = 0;
  r = 0;
  for(i=0; left[i] != '\0'; i++){
    if(left[i] == '?'){
      l += 3;
    }else if(left[i] == '!'){
      l += 2;
    }
  }
  for(i=0; right[i] != '\0'; i++){
    if(right[i] == '?'){
      r += 3;
    }else if(right[i] == '!'){
      r += 2;
    }
  }
  enum Outcome exp;
  if(l>r){
    exp = Left;
  }else if(r>l){
    exp = Right;
  }else{
    exp = Balance;
  }
  return exp;
}
