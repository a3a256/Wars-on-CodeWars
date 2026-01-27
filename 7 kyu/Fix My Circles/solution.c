void
circle_mender (char *content)
{
  int i, start, end;
  for(i=0; i<820; i+=41){
    start = i;
    end = start+39;
    while(content[start] != '#' && start < end){
      start++;
    }
    while(content[end] != '#' && end > i){
      end--;
    }
    while(start < end){
      content[start] = '#';
      start++;
    }
  }
}
