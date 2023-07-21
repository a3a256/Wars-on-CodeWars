#include <string>
#include <vector>
#include <algorithm>

std::string group_by_commas(int n)
{
  if(n == 0){
    return "0";
  }
  std::vector<std::string> vals;
  std::string scan;
  int sep=1000, num;
  while(n>0){
    num = n%sep;
    scan = std::to_string(num);
    while(scan.size()!=3){
      scan = '0'+scan;
    }
    vals.push_back(scan);
    n = n/sep;
  }
  std::string line = "";
  std::reverse(vals.begin(), vals.end());
  for(std::string s: vals){
    line += s;
    line += ',';
  }
  line.pop_back();
  while(line[0] == '0'){
    line.erase(line.begin()+0);
  }
  return line;
}
