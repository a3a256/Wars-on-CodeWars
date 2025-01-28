void reverse(char *str) {
  char temp;
  int i, left, right, length;
  length = 0;
  while(str[length] != '\0'){
    length++;
  }
  for(i=0; i<length; i++){
    left = i;
    right = length-1;
    while(left<=right){
      temp = str[left];
      str[left] = str[right];
      str[right] = temp;
      left++;
      right--;
    }
  }
  str[length] = '\0';
}
