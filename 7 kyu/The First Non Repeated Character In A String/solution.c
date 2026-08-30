char first_non_repeated(const char *string) {
  int i, j, found;
  for(i=0; string[i] != '\0'; i++){
    found = 0;
    for(j=0; string[j] != '\0'; j++){
      if(i != j && string[i] == string[j]){
        found = 1;
        break;
      }
    }
    if(!found){return string[i];}
  }
  return '\0';
}
