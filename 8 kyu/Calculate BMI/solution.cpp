#include <string>

std::string bmi(double w, double h) 
{
  double res = w/(h*h);
  if(res <= 18.5f){return "Underweight";}
  if(res <= 25.0f){return "Normal";}
  if(res <= 30.0f){return "Overweight";}
  return "Obese";
}
