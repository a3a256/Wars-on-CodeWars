#define _USE_MATH_DEFINES
 
#include <cmath>
#include <utility>
#include <vector>
#include <algorithm>

using vec_rect_circle = std::vector<std::pair<double, double>>;

struct cmp{
  inline bool operator() (std::pair<double, double>& a, std::pair<double, double> &b){
    double area_a, area_b;
    if(a.second == 0.0){area_a = M_PI*a.first*a.first;}else{area_a = a.first*a.second;}
    if(b.second == 0.0){area_b = M_PI*b.first*b.first;}else{area_b = b.first*b.second;}
    return area_a < area_b;
  }
};

vec_rect_circle sort_by_area(vec_rect_circle v) {
  std::sort(v.begin(), v.end(), cmp());
  return v;
}
