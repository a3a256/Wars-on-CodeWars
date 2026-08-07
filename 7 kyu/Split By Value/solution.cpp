std::vector<int> split_by_value(int k, std::vector<int> elements)
{
  std::vector<int> res;
  for(int i: elements){
    if(i < k){
      res.push_back(i);
    }
  }
  for(int i: elements){
    if(i>=k){res.push_back(i);}
  }
  return res;
}
