char *human_readable_time (unsigned seconds, char *time_string)
{
	*time_string = '\0'; // write to time_string
  char nums[10] = "0123456789";
  unsigned hours = seconds/3600;
  seconds = seconds%3600;
  unsigned minutes = seconds/60;
  seconds = seconds%60;
  unsigned time[3] = {hours, minutes, seconds};
  int i, j;
  j = 0;
  for(i=0; i<8; i+=3){
    time_string[i+0] = nums[time[j]/10];
    time_string[i+1] = nums[time[j]%10];
    time_string[i+2] = ':';
    j ++;
  }
  time_string[8] = '\0';
	return time_string; // return it
}
