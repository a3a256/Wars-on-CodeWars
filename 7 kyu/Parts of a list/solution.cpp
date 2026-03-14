class PartList
{
public:
    static std::vector<std::pair <std::string, std::string>> partlist(std::vector<std::string> &arr){
      int i, j;
      std::string temp = "";
      std::pair<std::string, std::string> var;
      std::vector<std::pair <std::string, std::string>> res;
      for(i=0; i<arr.size()-1; i++){
        temp = "";
        for(j=0; j<i+1; j++){
          temp += arr[j];
          temp += ' ';
        }
        temp.pop_back();
        var.first = temp;
        temp = "";
        for(j=i+1; j<arr.size(); j++){
          temp += arr[j];
          temp += ' ';
        }
        temp.pop_back();
        var.second = temp;
        res.push_back(var);
        temp = "";
      }
      return res;
    }
};
