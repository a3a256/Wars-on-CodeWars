#include <vector>

int tram(int stops, const std::vector<int>& a, const std::vector<int>& b) {
  int people_on_train = 0, res = 0;
  int i;
  for(i=0; i<stops; i++){
    people_on_train -= a[i];
    people_on_train += b[i];
    if(people_on_train > res){res = people_on_train;}
  }
  return res;
}
