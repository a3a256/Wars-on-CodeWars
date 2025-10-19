#include <stdlib.h>

char* mirror(const char* text) {
  int words = 0, biggest_word = 0, temp = 0;
  int i, j, index, cur_size;
  for(i=0; text[i] != '\0'; i++){
    if(text[i] == ' '){
      words++;
      if(temp > biggest_word){
        biggest_word = temp;
      }
      temp = 0;
    }else{
      temp++;
    }
  }
  words++;
  if(temp > biggest_word){
    biggest_word = temp;
  }
  int row_size = biggest_word + 5;
  int words_mirrored = row_size*(words+2);
  words_mirrored--;
  char *res = (char*)malloc(words_mirrored*sizeof(char));
  index = 0;
  for(i=0; i<row_size-1; i++){
    res[index] = '*';
    index++;
  }
  res[index] = '\n';
  index++;
  for(i=0; text[i] != '\0'; i++){
    if(text[i] == ' '){
      res[index] = '*';
      index ++;
      res[index] = ' ';
      index ++;
      cur_size = 0;
      for(j=i-1; j>-1 && text[j] != ' '; j--){
        res[index] = text[j];
        index++;
        cur_size++;
      }
      for(j=cur_size; j<biggest_word; j++){
        res[index] = ' ';
        index ++;
      }
      res[index] = ' ';
      index ++;
      res[index] = '*';
      index++;
      res[index] = '\n';
      index++;
    }
  }
  res[index] = '*';
  index ++;
  res[index] = ' ';
  index ++;
  cur_size = 0;
  for(j=i-1; j>-1 && text[j] != ' '; j--){
    res[index] = text[j];
    index++;
    cur_size++;
  }
  for(j=cur_size; j<biggest_word; j++){
    res[index] = ' ';
    index ++;
  }
  res[index] = ' ';
  index ++;
  res[index] = '*';
  index ++;
  res[index] = '\n';
  index++;
  for(i=0; i<row_size-1; i++){
    res[index] = '*';
    index++;
  }
  res[index] = '\0';
  return res;
}
