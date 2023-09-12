unsigned similarities_sum (const char *string)
{
  int i, j, c, count;
  i = 0;
  count = 0;
  while(string[i] != '\0'){
    j = i;
    c = 0;
    while(string[j] == string[c] && string[j] != '\0'){
      count++;
      j++;
      c++;
    }
    i++;
  }
	return (unsigned)count;
}
