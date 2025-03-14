#include <stdio.h>
#include <stdlib.h>

char* collatz(int n) {
  int cur_num, temp, digits_count, total_count, index, temp_index, digit;
  cur_num = n;
  total_count = 0;
  while(cur_num > 1){
    temp = cur_num;
    digits_count = 0;
    while(temp > 0){
      temp /= 10;
      digits_count++;
    }
    total_count += digits_count;
    total_count += 2;
    if(cur_num%2 == 0){
      cur_num = cur_num/2;
    }else{
      cur_num = 3*cur_num + 1;
    }
  }
  total_count += 2;
  char* line = (char*)malloc(total_count*sizeof(char));
  cur_num = n;
  index = 0;
  while(cur_num > 1){
    temp = cur_num;
    while(temp>0){
      line[index] = '_';
      temp = temp/10;
      index++;
    }
    temp_index = index-1;
    temp = cur_num;
    while(temp>0){
      digit = temp%10;
      line[temp_index] = digit+'0';
      temp = temp/10;
      temp_index--;
    }
    line[index] = '-';
    index++;
    line[index] = '>';
    index++;
    if(cur_num%2 == 0){
      cur_num = cur_num/2;
    }else{
      cur_num = 3*cur_num + 1;
    }
  }
  line[index] = '1';
  index++;
  line[index] = '\0';
  return line;
}
