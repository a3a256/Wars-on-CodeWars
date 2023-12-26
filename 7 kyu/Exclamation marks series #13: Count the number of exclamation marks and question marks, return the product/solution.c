unsigned product (const char *string)
{
  unsigned exclamation = 0, question = 0, i;
  for(i=0; string[i] != '\0'; i++){
    if(string[i] == '!'){
      exclamation++;
    }else if(string[i] == '?'){
      question++;
    }
  }
  return exclamation*question;
}
