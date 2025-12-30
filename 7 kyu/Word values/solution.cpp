
std::vector<int> wordValue(std::vector <std::string> arr){
  int i, v;
  std::vector<int> res;
  for(i=0; i<arr.size(); i++){
    v = 0;
    for(char c: arr[i]){
      if(c != ' '){
        v += ((int)c - 'a' + 1)*(i+1);
      }
    }
    res.push_back(v);
  }
  return res;
}
