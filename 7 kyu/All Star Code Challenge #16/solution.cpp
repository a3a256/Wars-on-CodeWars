char no_repeat(const char *string)
{
  int i, j, count;
  for(i=0; string[i] != '\0'; i++){
    count = 1;
    for(j=0; string[j] != '\0'; j++){
      if(i != j && string[i] == string[j]){
        count++;
      }
    }
    if(count == 1){return string[i];}
  }
  return 'x';
}
