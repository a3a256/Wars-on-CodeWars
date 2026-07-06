// return quarter notes per measure
// the result may end up being zero
// for invalid denomiator return -1

int find_quarter_notes(const char *time_signature) {
  int top, bottom, slash = 0, i;
  bottom = 0;
  top = 0;
  for(i=0; time_signature[i] != '\0'; i++){
    if(time_signature[i] == '/'){
      slash = 1;
    }else{
      if(slash){bottom = bottom*10 + (int)time_signature[i] - '0';}
      else{top = top*10 + (int)time_signature[i] - '0';}
    }
  }
  int check = 1;
  while(check < bottom){check *= 2;}
  if(check != bottom){return -1;}
  double start = 0.25;
  int cur = 0;
  double bar = (double)top/(double)bottom;
  while((double)cur*start <= bar){
    cur++;
  }
  return cur-1;
}
