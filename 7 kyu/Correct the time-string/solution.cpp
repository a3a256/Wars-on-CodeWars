std::string correct(std::string timeString)
{
  if(timeString.size() != 8){return "";}
  if(timeString[2] != ':' && timeString[5] != ':'){return "";}
  int v;
  for(char c: timeString){
    if(c != ':'){
      v = (int)c - '0';
      if(v < 0 || v > 9){
        return "";
      }
    }
  }
  std::string res = "";
  int hours = (int)timeString[0] - '0';
  hours *= 10;
  hours += (int)timeString[1] - '0';
  int minutes = (int)timeString[3] - '0';
  minutes *= 10;
  minutes += (int)timeString[4] - '0';
  int seconds = (int)timeString[6] - '0';
  seconds *= 10;
  seconds += (int)timeString[7] - '0';
  if(seconds >= 60){seconds-=60;minutes++;}
  if(minutes >= 60){hours++;minutes-=60;}
  if(hours >= 24){hours = hours%24;}
  if(hours < 10){res += '0';}
  res += std::to_string(hours);
  res += ':';
  if(minutes < 10){res += '0';}
  res += std::to_string(minutes);
  res += ':';
  if(seconds < 10){res += '0';}
  res += std::to_string(seconds);
  return res;
}
