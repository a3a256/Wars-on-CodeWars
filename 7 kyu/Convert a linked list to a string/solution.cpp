#include <string>

std::string stringify(const Node *list)
{
  std::string res = "";
  while(list){
    res += std::to_string(list->data);
    res += " -> ";
    list = list->next;
  }
  res += "nullptr";
  return res;
}
