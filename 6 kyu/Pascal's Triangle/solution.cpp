#include <vector>
std::vector<long long> pascalsTriangle(int n)
{
  if(n == 1){return {1};}
  if(n == 2){return {1, 1, 1};}
  std::vector<std::vector<long long>> triangle = {{1}, {1, 1}};
  std::vector<long long> line;
  long long i;
  while((int)triangle.size() < n){
    line.clear();
    line.push_back(1);
    for(i=0; i<triangle.back().size()-1; i++){
      line.push_back(triangle.back()[i] + triangle.back()[i+1]);
    }
    line.push_back(1);
    triangle.push_back(line);
  }
  line.clear();
  for(i=0; i<triangle.size(); i++){
    line.insert(line.end(), triangle[i].begin(), triangle[i].end());
  }
  return line;
}
