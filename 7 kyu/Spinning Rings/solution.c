unsigned spinning_rings(unsigned inner_max, unsigned outer_max) {
  int inner, outer, step;
  inner = inner_max;
  outer = 1;
  step = 1;
  while(inner != outer){
    if(inner == 0){
      inner = inner_max;
    }else{
      inner--;
    }
    if(outer == outer_max){
      outer = 0;
    }else{
      outer++;
    }
    step++;
  }
  return step;
}
