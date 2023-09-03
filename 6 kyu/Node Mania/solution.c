#include <stdbool.h>
#include <stddef.h>

struct Node {
	struct Node *next;
	char data;
};

bool get_kth_from_last (const struct Node *list, size_t k, char *data)
{
  const struct Node *itr = list;
  unsigned long len = 0;
  while(itr != NULL){
    len++;
    itr = itr->next;
  }
  itr = list;
  if(k<=len){
    while(len>k){
      itr = itr->next;
      len--;
    }
    *data = itr->data;
    return true;
  }
	// assign to 'data' if the element is found
	// return whether the element was found
	return false;
}
