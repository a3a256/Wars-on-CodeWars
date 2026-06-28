class DivSeven
{
public:
    static std::pair <long long, long long> seven(long long m){
      long long x, y, steps = 0;
      while(m>=100){
        y = m%10;
        x = m/10;
        m = x - 2*y;
        steps++;
      }
      return {m, steps};
    }
};
