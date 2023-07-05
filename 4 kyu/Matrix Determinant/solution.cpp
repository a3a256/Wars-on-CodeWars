#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long determinant(vector< vector<long long> > m) {
  if(m.size() == 1){
    return m[0][0];
  }
  vector<vector<long long>> mat;
  vector<long long> temp;
  unsigned i, j, k;
  long long res = 0;
  for(i=0; i<m.size(); i++){
    for(j=1; j<m.size(); j++){
      for(k=0; k<m.size(); k++){
        if(k!=i){
          temp.push_back(m[j][k]);
        }
      }
      mat.push_back(temp);
      vector<long long>().swap(temp);
    }
    res += pow(-1, 2+i)*m[0][i]*determinant(mat);
    vector<vector<long long>>().swap(mat);
  }
  return res;
}
