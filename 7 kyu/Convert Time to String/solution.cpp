#include <string>

std::string convertTime(int timeDiff)
{
  int days = timeDiff/86400;
  timeDiff = timeDiff%86400;
  int hours = timeDiff/3600;
  timeDiff = timeDiff%3600;
  int minutes = timeDiff/60;
  timeDiff = timeDiff%60;
  std::string res = "";
  res += std::to_string(days);
  res += ' ';
  res += std::to_string(hours);
  res += ' ';
  res += std::to_string(minutes);
  res += ' ';
  res += std::to_string(timeDiff);
  return res;
}
