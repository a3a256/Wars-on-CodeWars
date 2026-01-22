#include <algorithm>

class WhichAreIn
{

  public:
  static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2){
    if(array2.size() == 0){return {};}
    std::string joined = "";
    int i;
    std::sort(array1.begin(), array1.end());
    for(i=0; i<array2.size(); i++){
      joined += array2[i];
      joined += ',';
    }
    joined.pop_back();
    int index;
    std::vector<std::string> v;
    for(i=0; i<array1.size(); i++){
      index = joined.find(array1[i]);
      if(index != std::string::npos){
        v.push_back(array1[i]);
      }
    }
    return v;
  }
};
