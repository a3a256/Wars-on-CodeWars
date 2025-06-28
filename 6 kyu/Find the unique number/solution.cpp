float find_uniq(const std::vector<float> &v)
{
  int i, j;
  i = 1;
  j = v.size()-1;
  while(i<j){
    if(v[0] != v[i] && v[0] == v[j]){
      return v[i];
    }
    if(v[0] == v[i] && v[0] != v[j]){
      return v[j];
    }
    if(v[i] == v[j] && v[0] != v[i]){
      return v[0];
    }
    i++;
    j--;
  }
  return v[i];
}
