class ScalingSqStrings
{
public:
    static std::string scale(const std::string &strng, int k, int n){
      if(strng == ""){return "";}
      int i, j, l;
      std::string temp = "", nl = "", res = "";
      for(i=0; i<strng.size(); i++){
        if(strng[i] == '\n'){
          nl = "";
          for(j=0; j<temp.size(); j++){
            for(l=0; l<k; l++){
              nl += temp[j];
            }
          }
          for(j=0; j<n; j++){
            res += nl;
            res += '\n';
          }
          temp = "";
        }else{
          temp += strng[i];
        }
      }
      nl = "";
      for(j=0; j<temp.size(); j++){
        for(l=0; l<k; l++){
          nl += temp[j];
        }
      }
      for(j=0; j<n; j++){
        res += nl;
        res += '\n';
      }
      res.pop_back();
      return res;
    }
};
