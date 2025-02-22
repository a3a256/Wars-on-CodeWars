#include <cmath>

class Movie
{
public:
    static int movie(int card, int ticket, double perc){
      int step = 1;
      double system_a, system_b, prev;
      system_a = (double)ticket;
      prev = (double)ticket*perc;
      system_b = (double)card + prev;
      while((int)system_a <= std::ceil(system_b)){
        step++;
        system_a = (double)ticket*(double)step;
        prev = prev*perc;
        system_b += prev;
      }
      return step;
    }
};
