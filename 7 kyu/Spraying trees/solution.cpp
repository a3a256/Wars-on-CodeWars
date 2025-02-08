#include <string>
#include <map>

std::string task(std::string day_of_week, int n, int c) {
  std::map<std::string, std::string> mp = {{"Monday", "James"},
                                          {"Tuesday", "John"},
                                          {"Wednesday", "Robert"},
                                          {"Thursday", "Michael"},
                                          {"Friday", "William"}};
  std::string trees = std::to_string(n);
  std::string cost = std::to_string(n*c);
  std::string res = "It is " + day_of_week + " today, ";
  res += mp[day_of_week] + ", you have to work, you must spray ";
  res += trees + " trees and you need " + cost + " dollars to buy liquid";
  return res;
}
