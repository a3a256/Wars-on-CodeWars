unsigned long long fibonacci(unsigned long long max) {
  if(max <= 1){
    return 0;
  }
  std::vector<unsigned long long> res = {0, 1};
  unsigned long long sum = res[res.size()-1] + res[res.size()-2];
  while(sum < max){
    res.push_back(sum);
    sum = res[res.size()-1] + res[res.size()-2];
  }
  unsigned long long v = 0;
  for(unsigned long long c: res){
    if(c%2 == 0){
      v += c;
    }
  }
  return v;
}
