#include <vector>
#include <algorithm>

using namespace std; 

int findSmallest(vector <int> list)
{
  return *min_element(list.begin(), list.end());
}
