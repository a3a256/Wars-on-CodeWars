int letters_to_numbers(const char *str) {
  int i, j, score;
  score = 0;
  char* lower = "abcdefghijklmnopqrstuvwxyz";
  char* upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char* nums = "0123456789";
  for(i=0; str[i] != '\0'; i++){
    for(j=0; j<10; j++){
      if(nums[j] == str[i]){
        score += j;
        break;
      }
    }
    for(j=0; j<26; j++){
      if(lower[j] == str[i]){
        score += (j+1);
        break;
      }
      if(upper[j] == str[i]){
        score += (j+1)*2;
        break;
      }
    }
  }
  return score; // <--- hajime!
}
