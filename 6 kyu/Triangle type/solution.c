//  Should return triangle type
//  0 : if triangle cannot be made with given sides
//  1 : acute triangle
//  2 : right triangle
//  3 : obtuse triangle

#include <math.h>
#include <stdio.h>

float find_angle(int A, int B, int C){
  float a = (float)A;
  float b = (float)B;
  float c = (float)C;
  float pi = 3.141593f;
  float res = (a*a + b*b - c*c)/(2*a*b);
  res = acos(res)*(float)180/pi;
  return res;
}

int val_round(float val){
  int crop = (int)val;
  float left = val-(float)crop;
  if(left < 0.5f){
    return crop;
  }
  crop ++;
  return crop;
}

int triangleType(int a, int b, int c) {
  float angles[3] = {find_angle(a, b, c),
                    find_angle(c, b, a),
                    find_angle(a, c, b)};
  int more_than90 = 0;
  int less_than90 = 0;
  int equals90 = 0;
  int i;
  for(i=0; i<3; i++){
    if(isnan(angles[i])){
      return 0;
    }else{
      int cast = val_round(angles[i]);
      if(cast < 90 && cast != 0){
        less_than90 ++;
      }else if(cast == 90){
        equals90 ++;
      }else{
        more_than90 ++;
      }
    }
  }
  if(less_than90 == 3){
    return 1;
  }
  if(equals90 == 1){
    return 2;
  }
  if(more_than90 == 1 && less_than90 == 2){
    return 3;
  }
  return 0;
}
