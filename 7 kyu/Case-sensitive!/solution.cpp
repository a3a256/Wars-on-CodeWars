#include <utility>
#include <string>
#include <vector>
#include <cctype>

std::pair<bool, std::vector<char>> caseSensitive(const std::string& str) {
  std::pair<bool, std::vector<char>> res;
  res.first = true;
  for(char c: str){
    if(std::toupper(c) == c && c != ' '){
      res.first = false;
      res.second.push_back(c);
    }
  }
  return res;
}
