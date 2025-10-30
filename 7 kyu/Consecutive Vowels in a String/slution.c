int get_the_vowels (const char *string)
{
  char* s = "aeiou";
  int i, index, count;
  count = 0;
  index = 0;
  for(i=0; string[i] != '\0'; i++){
    if(index >= 5){
      index = 0;
    }
    if(string[i] == s[index]){
      count++;
      index++;
    }
  }
	return count;
}
