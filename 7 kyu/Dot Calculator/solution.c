#include <stdlib.h>

char *dot_calculator (const char *expression)
{
  int i, j, len, first_num, second_num;
  first_num = 0;
  second_num = 0;
  len = 0;
  while(expression[len] != '\0'){
    len++;
  }
  for(i=0; expression[i] != ' '; i++){
    first_num++;
  }
  for(j=len-1; expression[j] != ' '; j--){
    second_num++;
  }
  i++;
  if(expression[i] == '+'){
    first_num += second_num;
  }else if(expression[i] == '-'){
    first_num -= second_num;
  }else if(expression[i] == '*'){
    first_num *= second_num;
  }else{
    first_num /= second_num;
  }
  char *s = (char*)malloc(first_num*sizeof(char));
  if(!first_num){
    return s;
  }
  i = 0;
  for(i=0; i<first_num; i++){
    s[i] = '.';
  }
  s[i] = '\0';
	return s;
}
