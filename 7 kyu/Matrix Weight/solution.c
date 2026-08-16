#include <stddef.h>
#include <math.h>

enum matrix_weight { NONE, THIN, FAT, PERFECT };

enum matrix_weight thin_or_fat(size_t size, const int matrix[size][size]) {
  int i, j, t_height, t_width;
  float width = 0.0, height = 0.0;
  for(i=0; i<size; i++){
    t_height = 0;
    t_width = 0;
    for(j=0; j<size; j++){
      t_width += matrix[i][j];
      t_height += matrix[j][i];
    }
    height += sqrt((float)t_height);
    width += sqrt((float)t_width);
  }
  if(height > width){return THIN;}
  if(height == width){return PERFECT;}
  if(width > height){return FAT;}
  return NONE;
}
