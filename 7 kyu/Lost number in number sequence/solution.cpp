#include <vector>

using namespace std;

int findDeletedNumber(list<int> startingList, list<int> mixedList)
{
  vector<int> n(startingList.size()+1, 0);
  for(int i: mixedList){
    n[i]++;
  }
  int index = 0;
  for(index = 1; index<n.size(); index++){
    if(n[index] == 0){
      return index;
    }
  }
  return 0;
}
