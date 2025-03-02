#include <string>
#include <vector>

class Rainfall
{
public:
    static std::vector<float> process_input(std::string town, std::string s){
      int pos = (int)s.find(town), i;
      std::string selected = "";
      for(i=pos; i<s.size() && s[i] != '\n'; i++){
        selected += s[i];
      }
      size_t colon = selected.find(':');
      std::string weather = selected.substr(colon+1);
      std::string temp = "";
      std::vector<float> res;
      for(i=0; i<weather.size(); i++){
        if(weather[i] == ','){
          temp = temp.substr(4);
          res.push_back(std::stof(temp));
          temp = "";
        }else{
          temp += weather[i];
        }
      }
      if(temp != ""){
        temp = temp.substr(4);
        res.push_back(std::stof(temp));
      }
      return res;
    }
    static double mean(std::string town, const std::string &strng){
      size_t pos = strng.find(town);
      if(pos == std::string::npos){
        return (double)(-1);
      }else{
        if(strng[pos+town.size()] != ':'){
          return (double)(-1);
        }
      }
      std::vector<float> temps = process_input(town, strng);
      float total = (float)0;
      for(float i: temps){
        total += i;
      }
      return (float)(total/(float)temps.size());
    }
    static double variance(std::string town, const std::string &strng){
      size_t pos = strng.find(town);
      if(pos == std::string::npos){
        return (double)(-1);
      }else{
        if(strng[pos+town.size()] != ':'){
          return (double)(-1);
        }
      }
      std::vector<float> temps = process_input(town, strng);
      float mean_val = mean(town, strng);
      float total = (float)0;
      for(float i: temps){
        total += (i-mean_val)*(i-mean_val);
      }
      return (float)(total/(float)temps.size());
    }
};
