#include <string>

unsigned long long countPhotos(const std::string& road){
  unsigned long long photos = 0;
  unsigned long len = road.size(), i, j;
  for(i=0; i<len; i++){
    if(road[i] == '.'){
      for(j=0; j<i; j++){
        if(road[j] == '>'){
          photos++;
        }
      }
      for(j=len-1;j>i; j--){
        if(road[j] == '<'){
          photos++;
        }
      }
    }
  }
  
  return photos;
}
