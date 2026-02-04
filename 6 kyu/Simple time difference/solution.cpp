#include <algorithm>

std::string solve(std::vector<std::string> times)
{
  if(times.size() == 1){return "23:59";}
  std::vector<int> v;
  std::string temp = "";
  int hours, minutes, i;
  for(i=0; i<times.size(); i++){
    temp += times[i][0];
    temp += times[i][1];
    hours = std::stoi(temp);
    temp = "";
    temp += times[i][3];
    temp += times[i][4];
    minutes = std::stoi(temp);
    v.push_back(hours*60 + minutes);
    temp = "";
  }
  std::sort(v.begin(), v.end());
  int diff;
  diff = -1;
  for(i=1; i<v.size(); i++){
    if(v[i] - v[i-1] > diff){
      diff = v[i] - v[i-1];
    }
  }
  int last = (1440 - v.back()) + v[0];
  if(last > diff){
    diff = last;
  }
  hours = diff/60;
  minutes = diff%60 - 1;
  temp = "";
  if(hours < 10){
    temp = '0' + std::to_string(hours);
  }else{temp = std::to_string(hours);}
  temp += ':';
  if(minutes < 10){
    temp += '0' + std::to_string(minutes);
  }else{temp += std::to_string(minutes);}
  return temp;
}
