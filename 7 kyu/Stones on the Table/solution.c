unsigned solution(const char *stones) {
  int i, count;
  count = 0;
  for(i=1; stones[i] != '\0'; i++){
    if(stones[i] == stones[i-1]){
      count++;
    }
  }
  return count;
}
