#include <array>
#include <map>

int score(const std::array<unsigned, 5>& dice) {
  std::map<int, int> mp;
  int i, points;
  for(i=0; i<dice.size(); i++){
    mp[dice[i]]++;
  }
  points = 0;
  points += 1000*(mp[1]/3);
  points += 100*(mp[1]%3);
  points += 500*(mp[5]/3);
  points += 50*(mp[5]%3);
  points += 200*(mp[2]/3);
  points += 300*(mp[3]/3);
  points += 400*(mp[4]/3);
  points += 600*(mp[6]/3);
  return points;
}
