#include <ctime>

class DateDays
{
public:
    static std::string dateNbDays(double a0, double a, double p){
      double interest_rate = p/(double)36000;
      int days = 0;
      while(a0 < a){
        a0 += a0*interest_rate;
        days++;
      }
      std::tm date = {0, 0, 0, 1, 0, 116};
      std::time_t time = std::mktime(&date);
      time += days * 86400;
      std::tm new_date = *std::localtime(&time);
      std::string line = "";
      line += std::to_string(new_date.tm_year + 1900) + '-';
      if(new_date.tm_mon + 1 < 10){
        line += '0';
      }
      line += std::to_string(new_date.tm_mon + 1) + '-';
      if(new_date.tm_mday < 10){
        line += '0';
      }
      line += std::to_string(new_date.tm_mday);
      return line;
    }
};
