#include <map>

using namespace std;

vector<vector<int> *> bucketize(const vector<int> &a)
{
  map<int, int> mp;
  map<int, vector<int>> qp;
  int i;
  for(i=0; i<a.size(); i++){
    mp[a[i]]++;
  }
  for(auto it: mp){
    qp[it.second].push_back(it.first);
  }
  vector<vector<int>*> res(a.size()+1, nullptr);
  for(auto it: qp){
    res[it.first] = new vector<int>(it.second);
  }
  return res; // Do your magic!
}
