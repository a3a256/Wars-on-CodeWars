std::vector<int> climb(int n)
{
  std::vector<int> res = {n};
  while(res[0] > 1){
    res.insert(res.begin()+0, res[0]/2);
  }
  return res;
}
