std::vector<int> bubbleSortOnce(const std::vector<int> &input)
{
  int i, j;
  std::vector<int> res;
  res = input;
  for(i=1; i<res.size(); i++){
    if(res[i] < res[i-1]){
      j = res[i];
      res[i] = res[i-1];
      res[i-1] = j;
    }
  }
  return res;
}
