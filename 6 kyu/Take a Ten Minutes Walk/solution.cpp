#include<vector>

bool isValidWalk(std::vector<char> walk) {
  if(walk.size() != 10){
    return false;
  }
  int i, x = 0, y = 0;
  for(i=0; i<10; i++){
    if(walk[i] == 'n'){
      y++;
    }else if(walk[i] == 's'){
      y--;
    }else if(walk[i] == 'w'){
      x++;
    }else{
      x--;
    }
  }
  if(x == 0 && y == 0){
    return true;
  }
  return false;
}
