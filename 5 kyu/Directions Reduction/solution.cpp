class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr){
      int sorted = false;
      int i;
      while(!sorted){
        sorted = true;
        for(i=1; i<arr.size(); i++){
          if((arr[i] == "NORTH" && arr[i-1] == "SOUTH") || (arr[i] == "SOUTH" && arr[i-1] == "NORTH")){
            arr.erase(arr.begin()+(i-1));
            arr.erase(arr.begin()+(i-1));
            sorted = false;
          }else if((arr[i] == "EAST" && arr[i-1] == "WEST") || (arr[i] == "WEST" && arr[i-1] == "EAST")){
            arr.erase(arr.begin()+(i-1));
            arr.erase(arr.begin()+(i-1));
            sorted = false;
          }
        }
      }
      return arr;
    }
};
