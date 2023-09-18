int countDeafRats(const std::string &town)
{
  std::string no_spaces = "";
  for(char c: town){
    if(c!=' '){
      no_spaces += c;
    }
  }
  int left, count;
  unsigned long i, pos;
  left = 1;
  count = 0;
  pos = no_spaces.find('P');
  for(i=0; i<pos; i+=2){
    if(no_spaces[i] != '~'){
      count++;
    }
  }
  for(i=pos+1; i<no_spaces.size(); i+=2){
    if(no_spaces[i] != 'O'){
      count++;
    }
  }
  return count;
}
