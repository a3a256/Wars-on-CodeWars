#include <string>
#include <vector>

std::string is_sorted_and_how(const std::vector<int> &numbers)
{
  int i;
  bool asc = true;
  for(i=1; i<numbers.size(); i++){
    if(numbers[i] < numbers[i-1]){
      asc = false;
    }
  }
  if(asc){return "yes, ascending";}
  bool desc = true;
  for(i=1; i<numbers.size(); i++){
    if(numbers[i] > numbers[i-1]){
      desc = false;
    }
  }
  if(desc){return "yes, descending";}
  return "no"; // TODO: implementation
}
