#include <string>

std::string add_on(int n, std::string l){
  std::string line = "";
  line += std::to_string(n);
  line += ' ';
  line += l;
  if(n == 1){
    line.pop_back();
  }
  line += ", ";
  return line;
}

std::string format_duration(int seconds) {
  if(seconds == 0){
    return "now";
  }
  int year = 31536000;
  int day = 86400;
  int hour = 3600;
  int minute = 60;
  int years = seconds/year;
  seconds = seconds%year;
  int days = seconds/day;
  seconds = seconds%day;
  int hours = seconds/hour;
  seconds = seconds%hour;
  int minutes = seconds/minute;
  seconds = seconds%minute;
  std::string line = "";
  if(years != 0){
    line += add_on(years, "years");
  }
  if(days != 0){
    line += add_on(days, "days");
  }
  if(hours != 0){
    line += add_on(hours, "hours");
  }
  if(minutes != 0){
    line += add_on(minutes, "minutes");
  }
  if(seconds != 0){
    line += add_on(seconds, "seconds");
  }
  line.pop_back();
  line.pop_back();
  int index;
  unsigned int i;
  bool comas = false;
  for(i=0; i<line.size(); i++){
    if(line[i] == ','){
      comas = true;
      index = i;
    }
  }
  if(comas){
    std::string first, second;
    first = line.substr(0, index);
    second = line.substr(index+1);
    first += " and";
    first += second;

    return first;
  }
  
  return line;
}
