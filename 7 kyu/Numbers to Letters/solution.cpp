#include <string>
#include <vector>
#include <iostream>

std::string switcher(const std::vector<std::string>& arr) {
  std::string line = "";
  std::string alp = "zyxwvutsrqponmlkjihgfedcba!? ";
  int i, j;
  for(i=0; i<arr.size(); i++){
    j = std::stoi(arr[i]);
    line += alp[j-1];
  }
  return line;
}
