#include <cmath>
#include <set>

class SqProd2Sum
{
public:
    static std::vector<std::pair <long, long>> prod2Sum(long long a, long long b, long long c, long long d){
      long long goal = (a*a + b*b)*(c*c + d*d);
      std::set<long long> options;
      options.insert(std::abs(a*b + c*d));
      options.insert(std::abs(a*b-c*d));
      options.insert(std::abs(a*c + b*d));
      options.insert(std::abs(a*c - b*d));
      options.insert(std::abs(a*d + b*c));
      options.insert(std::abs(a*d - b*c));
      std::vector<std::pair<long, long>> res;
      long long i, left, right ,cropped;
      for(i=0; i<=*options.rbegin(); i++){
        left = i*i;
        right = goal-left;
        cropped = std::sqrt(right);
        if(cropped*cropped == right){
          if(options.count(i) != 0 && options.count(cropped) != 0){
            if(cropped >= i){
              res.push_back({i, cropped});
            }
          }
        }
      }
      return res;
    }
};
