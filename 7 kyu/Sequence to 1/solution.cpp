std::vector<int> seqToOne(int n) {
  std::vector<int> res;
  while(n!=1){
    res.push_back(n);
    if(n<1){n++;}else{n--;}
  }
  res.push_back(1);
  return res;
}
