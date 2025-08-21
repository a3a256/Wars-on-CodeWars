#include <algorithm>

struct cmp{
  inline bool operator() (char &a, char &b){
    return a>b;
  }
};

std::string sortTheInnerContent (const std::string words, int length) {
  std::string temp = "", res = "";
  int i;
  for(i=0; i<words.size(); i++){
    if(words[i] == ' '){
      if(temp.size() > 3){
        std::sort(temp.begin()+1, temp.begin()+(temp.size()-1), cmp());
      }
      res += temp;
      res += ' ';
      temp = "";
    }else{
      temp += words[i];
    }
  }
  if(temp.size() > 3){
    std::sort(temp.begin()+1, temp.begin()+(temp.size()-1), cmp());
  }
  res += temp;
  return res;
}
