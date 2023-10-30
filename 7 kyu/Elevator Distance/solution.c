#include <stddef.h>
#define ABS(a) (((a)<0)?((a)*(-1)):(a))
unsigned elevator_distance (size_t length, const int floors[length])
{
  int i, sum;
  sum = 0;
  for(i=1; i<length; i++){
    sum += ABS(floors[i]-floors[i-1]);
  }
	return sum;
}
