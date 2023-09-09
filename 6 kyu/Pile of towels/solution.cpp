#include <string>
#include <vector>
#include <map>

std::vector<std::string> sort_the_pile(std::vector<std::string> pile_of_towels, const std::vector<unsigned> &weekly_used_towels) {
  std::map<std::string, unsigned> owner;
  unsigned int i, j;
  for(i=0; i<weekly_used_towels.size(); i++){
    for(j=0; j<weekly_used_towels[i]; j++){
      owner[pile_of_towels.back()]++;
      pile_of_towels.pop_back();
    }
    while(owner["red"] > 0){
      pile_of_towels.push_back("red");
      owner["red"]--;
    }
    while(owner["blue"] > 0){
      pile_of_towels.push_back("blue");
      owner["blue"]--;
    }
  }
  return pile_of_towels;
}
