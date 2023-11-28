#include <string>
#include <cctype>

std::string alphabetized(const std::string& str){
  if(str.size() == 0){
    return str;
  }
  std::string line;
  std::string alp = "abcdefghijklmnopqrstuvwxyz";
  for(char c: str){
    if(alp.find(std::tolower(c)) != std::string::npos){
      line += c;
    }
  }
  bool sorted = false;
  int i;
  char c;
  while(!(sorted)){
    sorted = true;
    for(i=1; i<line.size(); i++){
      if(std::tolower(line[i]) != std::tolower(line[i-1])){
        if(std::tolower(line[i]) < std::tolower(line[i-1])){
          sorted = false;
          c = line[i];
          line[i] = line[i-1];
          line[i-1] = c;
        }
      }
    }
  }
  return line;
}
