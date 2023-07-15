#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
  std::string line = "";
  if(names.size() == 0){
    return "no one likes this";
  }
  if(names.size() <= 3){
    unsigned int i;
    for(std::string s: names){
      line += s + ", ";
    }
    line.pop_back();
    line.pop_back();
    int index;
    bool present = false;
    for(i=0; i<line.size(); i++){
      if(line[i] == ','){
        index = i;
        present = true;
      }
    }
    if(present){
      line = line.substr(0, index) + " and" + line.substr(index+1) + " like this";
    }else{
      line += " likes this";
    }
    return line;
  }
  
  line = names[0] + ", " + names[1] + " and " + std::to_string(names.size()-2) + " others like this";
  return line;
}
