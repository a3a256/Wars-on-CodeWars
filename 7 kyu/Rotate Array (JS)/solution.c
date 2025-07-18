#include <stddef.h>
#include <stdlib.h>

void rotate(size_t length, int array[length], long long rotations)
{
  int rot;
  if(length == 0){
    rot = 0;
  }else if(rotations>=0){
    rot = rotations%length;
  }else{
    rot = (rotations*(-1))%length;
  }
  int i, j, last;
  for(i=0; i<rot; i++){
    if(rotations>=0){
      last = array[length-1];
      for(j=length-1; j>0; j--){
        array[j] = array[j-1];
      }
      array[0] = last;
    }else{
      last = array[0];
      for(j=0; j<length-1; j++){
        array[j] = array[j+1];
      }
      array[length-1] = last;
    }
  }
}
