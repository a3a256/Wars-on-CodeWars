#include <vector>
#include <string>
#include <cctype>

std::vector<int> vowelIndices(const std::string& word){
  std::vector<int> res;
  char c;
  int i;
  for(i=0; i<word.size(); i++){
    c = std::tolower(word[i]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
      res.push_back(i+1);
    }
  }
  return res;
}
