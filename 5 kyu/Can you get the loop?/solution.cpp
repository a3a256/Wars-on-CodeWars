#include <vector>
#include <algorithm>

int getLoopSize(Node* startNode){
  std::vector<Node*> nodes;
  Node* itr = startNode;
  int count = 0;
  while(itr != nullptr){
    if(std::find(nodes.begin(), nodes.end(), itr) == nodes.end()){
      nodes.push_back(itr);
      count ++;
    }else{
      break;
    }
    itr = itr->getNext();
  }
  int index = 0;
  for(unsigned int i=0; i<nodes.size(); i++){
    if(nodes[i] == itr){
      index = i;
      break;
    }
  }
  return count - index;
}
