std::vector<double> averages(std::vector<int> numbers)
{
  std::vector<double> result;
  double cur = 0.0;
  for(int i=1; i<numbers.size(); i++){
    cur = (double)(numbers[i] + numbers[i-1])/2.0;
    result.push_back(cur);
  }

  return result;
}
