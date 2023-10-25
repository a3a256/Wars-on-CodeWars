#include <vector>
#include <string>
#include <utility>

std::string find_routes (const std::vector<std::pair<std::string, std::string>> &routes) {
  bool copy;
  int i, j, start;
  for(i=0; i<routes.size(); i++){
    copy = false;
    for(j=0; j<routes.size(); j++){
      if(routes[i].first == routes[j].second){
        copy = true;
        break;
      }
    }
    if(!(copy)){
      start = i;
      break;
    }
  }
  std::string line = routes[start].first + ", ";
  copy = true;
  while(copy){
    copy = false;
    for(i = 0; i<routes.size(); i++){
      if(routes[i].first == routes[start].second){
        line += routes[start].second + ", ";
        start = i;
        copy = true;
        break;
      }
    }
    if(!(copy)){
      line += routes[start].second;
    }
  }
  return line;
}
