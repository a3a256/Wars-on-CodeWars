#include <math.h>

double discoverOriginalPrice(double discounted_price, double sales_percentage) {
  double main_dirr = (double)100 - sales_percentage;
  double result = (discounted_price*(double)100)/(main_dirr);
  result = round(result*100.0f)/100.0f;
  return result;
}
