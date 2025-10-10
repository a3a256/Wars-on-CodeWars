std::string histogram(std::vector<int> results)
{
  std::string res = "";
  int i, j;
  for(i=results.size()-1; i>-1; i--){
    res += std::to_string(i+1);
    res += '|';
    for(j=0; j<results[i]; j++){
      res += '#';
    }
    res += ' ';
    res += std::to_string(results[i]);
    if(results[i] == 0){
      res.pop_back();
      res.pop_back();
    }
    res += '\n';
  }
  return res;
}
