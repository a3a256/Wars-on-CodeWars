#include <iostream>
#include <string>
#include <vector>

Node *populate(std::vector<int> &v, int i){
  if(i == v.size()){
    return nullptr;
  }
  Node* itr = new Node(v[i]);
  itr->next = populate(v, i+1);
  return itr;
}

Node *parse(const std::string& s) {
  std::string temp = "";
  std::vector<int> res;
  int i = 0, val;
  for(i=0; i<s.size(); i++){
    val = (int)s[i] - '0';
    if(val >= 0 && val <= 9){
      temp += s[i];
    }else{
      if(temp != ""){
        res.push_back(std::stoi(temp));
      }
      temp = "";
    }
  }
  return populate(res, 0);
}
