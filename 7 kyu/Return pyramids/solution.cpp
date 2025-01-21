std::string pyramid(int n){
  int i, j, outer_gaps, inner_gaps;
  outer_gaps = n-1;
  inner_gaps = 0;
  std::string line = "";
  for(i=0; i<n; i++){
    for(j=0; j<outer_gaps; j++){
      line += ' ';
    }
    line += '/';
    for(j=0; j<inner_gaps; j++){
      if(i < n-1){
        line += ' ';
      }else{
        line += '_';
      }
    }
    line += "\\\n";
    outer_gaps--;
    inner_gaps+=2;
  }
  return line;
}
