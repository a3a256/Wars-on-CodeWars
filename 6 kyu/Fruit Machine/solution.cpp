#include <array>
#include <vector>

using namespace std;

unsigned fruit(const array<vector<string>, 3> &reels, const array<unsigned, 3> &spins)
{
  vector<string> v = {"Jack", "Queen", "King", "Bar", "Cherry", "Seven",
                     "Shell", "Bell", "Star", "Wild"};
  string one, two, three;
  one = reels[0][spins[0]];
  two = reels[1][spins[1]];
  three = reels[2][spins[2]];
  int i, ans;
  if(one == two && one == three && two == three){
    for(i=0; i<10; i++){
      if(v[i] == one){
        break;
      }
    }
    return (i+1)*10;
  }
  if(one == two){for(i=0;i<10;i++){if(v[i]==one){ans=i+1;break;}}if(three=="Wild"){ans*=2;}return ans;}
  if(three == two){for(i=0;i<10;i++){if(v[i]==two){ans=i+1;break;}}if(one=="Wild"){ans*=2;}return ans;}
  if(one == three){for(i=0;i<10;i++){if(v[i]==one){ans=i+1;break;}}if(two=="Wild"){ans*=2;}return ans;}
  return 0; // Code here
}
