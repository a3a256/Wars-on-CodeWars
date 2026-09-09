std::vector<double> distancesFromAverage(std::vector<int> input)
{
  double mean = 0.0;
  for(int i: input){mean += (double)i;}
  mean = mean/(double)input.size();
  std::vector<double> res;
  for(int i: input){res.push_back(mean - (double)i);}
  return res;
}
