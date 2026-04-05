class Rotations
{
public:
    static bool containAllRots(const std::string &strng, std::vector<std::string> &arr){
      int i, j, found;
      std::string s = strng;
      for(i=0; i<s.size(); i++){
        s = s.back() + s;
        s.pop_back();
        found = 0;
        for(j=0; j<arr.size(); j++){
          if(arr[j] == s){
            found = 1;
            break;
          }
        }
        if(!found){return false;}
      }
      return true;
    }
};
