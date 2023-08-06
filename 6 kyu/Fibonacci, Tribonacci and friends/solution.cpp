std::vector<int> xbonacci(std::vector<int> signature, int n)
{
  unsigned int i, j, orig;
  int vsum;
  orig = signature.size();
  if(n<=signature.size()){
    std::vector<int> res;
    int k;
    for(k=0; k<n; k++){
      res.push_back(signature[k]);
    }
    return res;
  }
  unsigned int lim = n - signature.size();
  for(i=0; i<lim; i++){
    vsum = 0;
    for(j=i;j<orig+i; j++){
      vsum += signature[j];
    }
    signature.push_back(vsum);
  }
  return signature;
}
