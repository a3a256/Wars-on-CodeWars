#include <stdio.h>

char *century_from_year (char *century_string, const char year[4 + 1])
{
// write to century_string and return it
  char nums[10] = "0123456789";
  int i, ten, dec;
  for(i=0; i<10; i++){if(year[0] == nums[i]){ten=i;break;}}
  for(i=0; i<10; i++){if(year[1] == nums[i]){dec=i;break;}}
  int cent = ten*10+dec;
  if(year[3] != '0' || year[2] != '0'){
    cent++;
  }
  int last;
  if(cent/10 == 1){
    century_string[0] = nums[cent/10];
    century_string[1] = nums[cent%10];
    century_string[2] = 't';
    century_string[3] = 'h';
    last = 4;
  }else if(cent<10){
    century_string[0] = nums[cent];
    if(cent == 1){
      century_string[1] = 's';
      century_string[2] = 't';
    }else if(cent == 2){
      century_string[1] = 'n';
      century_string[2] = 'd';
    }else if(cent == 3){
      century_string[1] = 'r';
      century_string[2] = 'd';
    }else{
      century_string[1] = 't';
      century_string[2] = 'h';
    }
    last = 3;
  }else if(cent==100){
    century_string[0] = '1';
    century_string[1] = '0';
    century_string[2] = '0';
    century_string[3] = 't';
    century_string[4] = 'h';
    last = 5;
  }else{
    century_string[0] = nums[cent/10];
    century_string[1] = nums[cent%10];
    if(cent%10 == 1){
      century_string[2] = 's';
      century_string[3] = 't';
    }else if(cent%10 == 2){
      century_string[2] = 'n';
      century_string[3] = 'd';
    }else if(cent%10 == 3){
      century_string[2] = 'r';
      century_string[3] = 'd';
    }else{
      century_string[2] = 't';
      century_string[3] = 'h';
    }
    last = 4;
  }
	century_string[last] = '\0';
	return century_string;
}
