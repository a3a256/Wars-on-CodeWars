#include <map>

/* Node Definition
struct Node {
  Node * next;
  int data;
}
*/

int Length(Node *head)
{
  int count = 0;
  while(head){
    head = head->next;
    count++;
  }
  return count;
}

int Count(Node *head, int data)
{
  std::map<int, int> mp;
  while(head){
    mp[head->data]++;
    head = head->next;
  }
  return mp[data];
}
