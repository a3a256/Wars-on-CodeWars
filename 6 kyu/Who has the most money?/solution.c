#include <stddef.h>

#define NAMELIM     0x8

struct student {
    char name[NAMELIM+1];
    unsigned fives;
    unsigned tens;
    unsigned twenties;
};

const char *most_money(const struct student *v, size_t n)
{
  int max_total = 0;
  int cur_total = 0;
  int i, index, count;
  index = -1;
  count = 0;
  for(i=0; i<n; i++){
    cur_total = 5*v[i].fives + 10*v[i].tens + 20*v[i].twenties;
    if(cur_total > max_total){
      max_total = cur_total;
      index = i;
      count = 1;
    }else if(cur_total == max_total){
      count++;
    }
  }
  if(count > 1){return "all";}
  return v[index].name;
}
