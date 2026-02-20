#include<vector>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls){
  unsigned long long sum = 0;
  int i;
  for(i=0; i<ls.size(); i++){
    sum += ls[i];
  }
  std::vector<unsigned long long> res;
  res.push_back(sum);
  for(i=0; i<ls.size(); i++){
    sum -= ls[i];
    res.push_back(sum);
  }
  return res;
}
