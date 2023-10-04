void what_time_is_it (double clock_angle, char timestring[6])
{
  char nums[10] = "0123456789";
  int hours = (int)(clock_angle/30);
  int minutes = (int)((clock_angle - hours*30)*2);
  timestring[0] = nums[hours/10];
  timestring[1] = nums[hours%10];
  if(clock_angle < 30){
    timestring[0] = '1';
    timestring[1] = '2';
  }
  timestring[2] = ':';
  timestring[3] = nums[minutes/10];
  timestring[4] = nums[minutes%10];
  timestring[5] = '\0';
}
