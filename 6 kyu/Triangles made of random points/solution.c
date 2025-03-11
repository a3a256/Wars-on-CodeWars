#include <stddef.h>
#include <math.h>

typedef struct Point_Coordinates { int    x,   y;   } coords;
typedef struct Triangle_Areas    { double max, min; } areas;

areas maxmin_areas(size_t length, const coords points[length]) {
  int i, j, k, first_diff, second_diff;
  double first_length, second_length, third_length, p, area;
  areas ans;
  ans.max = -1.0;
  ans.min = -1.0;
  for(i=0; i<length-2; i++){
    for(j=i+1; j<length-1; j++){
      for(k=j+1; k<length; k++){
        first_diff = points[j].x - points[i].x;
        first_diff = first_diff*first_diff;
        second_diff = points[j].y - points[i].y;
        second_diff = second_diff*second_diff;
        first_length = sqrt(first_diff+second_diff);
        first_diff = points[k].x - points[i].x;
        first_diff = first_diff*first_diff;
        second_diff = points[k].y - points[i].y;
        second_diff = second_diff*second_diff;
        second_length = sqrt(first_diff+second_diff);
        first_diff = points[k].x - points[j].x;
        first_diff = first_diff*first_diff;
        second_diff = points[k].y - points[j].y;
        second_diff = second_diff*second_diff;
        third_length = sqrt(first_diff+second_diff);
        p = (first_length+second_length+third_length)/2;
        area = sqrt(p*(p-first_length)*(p-second_length)*(p-third_length));
        area = floorf(area*10)/10;
        if(ans.max == -1.0 && ans.min == -1.0){
          ans.max = area;
          ans.min = area;
        }else{
          if(area > ans.max){
            ans.max = area;
          }else if(area < ans.min && area > 0.0){
            ans.min = area;
          }
        }
      }
    }
  }
  return ans;
}
