using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window){
      if(h <= 0.0f){
        return -1;
      }
      if(bounce < 0.0f || bounce >= 1.0f){
        return -1;
      }
      if(window >= h){
        return -1;
      }
      int count = 0;
      while(h>window){
        h = h*bounce;
        count++;
        if(h > window){
          count++;
        }
      }
      return count;
    }
};
