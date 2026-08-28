#include <string>
using namespace std;

string alphabetWar(string fight)
{
  map<char, int> left, right;
  left = {{'w', 4}, {'p', 3}, {'b', 2}, {'s', 1}};
  right = {{'m', 4}, {'q', 3}, {'d', 2}, {'z', 1}};
  int left_strength = 0, right_strength = 0;
  for(char c: fight){
    left_strength += left[c];
    right_strength += right[c];
  }
  if(left_strength > right_strength){return "Left side wins!";}
  if(left_strength < right_strength){return "Right side wins!";}
  return "Let's fight again!";
}
