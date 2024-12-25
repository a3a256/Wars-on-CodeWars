std::vector<std::vector<int>> rotateMatrixLeft(std::vector<std::vector<int>> matrix)
{
  int m, n;
  m = matrix.size();
  n = matrix[0].size();
  std::vector<std::vector<int>> res(n, std::vector<int>(m, 0));
  int i, j;
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      res[j][i] = matrix[i][j];
    }
  }
  i = 0;
  j = n-1;
  std::vector<int> temp;
  while(i<j){
    temp = res[i];
    res[i] = res[j];
    res[j] = temp;
    i++;
    j--;
  }
  return res;
}
