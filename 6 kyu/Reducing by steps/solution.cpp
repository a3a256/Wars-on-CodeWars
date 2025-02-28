#include <vector>
#include <numeric>

class Operarray
{
public:
    static long long lcmu(long long a, long long b){
      if(a == 0 || b == 0){
        return 0;
      }
      long long i, start, small;
      small = 0;
      if(a >= b){
        start = a;
        small = b;
      }else{
        start = b;
        small = a;
      }
      for(i=start; ;i+=start){
        if(i%small == 0){
          break;
        }
      }
      return std::abs(i);
    }
    static long long gcdi(long long x, long long y){
      if(x == 0 || y == 0){
        return 0;
      }
      long long lcm = lcmu(x, y);
      long long mul = std::abs(x*y);
      return (long long)(mul/lcm);
    }
    static long long som(long long a, long long b){
      return a+b;
    }
    static long long maxi(long long a, long long b){
      if(a>b){
        return a;
      }
      return b;
    }
    static long long mini(long long a, long long b){
      
      if(a<b){
        return a;
      }
      return b;
    }
    // your high order function oper
    static long long oper(long long (*f)(long long, long long), long long a, long long b){
      return f(a, b);
    }
    // your high order function operArray
    static std::vector<long long> operArray(long long (*f)(long long, long long), std::vector<long long> arr, long long init){
      long long i;
      arr[0] = f(arr[0], init);
      for(i=1; i<arr.size(); i++){
        arr[i] = f(arr[i], arr[i-1]);
      }
      return arr;
    }
};
