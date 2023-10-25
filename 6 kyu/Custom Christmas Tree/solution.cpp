std::string customChristmasTree(const std::string& chars, int n){
  std::string line = "";
  int i, j, level;
  j = 0;
  for(level = 1; level<=n; level++){
    for(i=0; i<n-level; i++){
      line += ' ';
    }
    for(i=0; i<level; i++){
      if(j >= chars.size()){
        j = 0;
      }
      line += chars[j];
      line += ' ';
      j++;
    }
    line.pop_back();
    line += "\n";
  }
  for(i=0; i<n/3; i++){
    for(j=0; j<n-1; j++){
      line += ' ';
    }
    line += '|';
    line += "\n";
  }
  line.pop_back();
  
  return line;
}
