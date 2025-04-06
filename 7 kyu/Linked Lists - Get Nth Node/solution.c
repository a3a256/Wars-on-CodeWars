#include <stddef.h>

struct List {
    struct List *next;
    int data;
};

/*
    Note: this function's interface is similar to pre-C23 strchr():
    it takes a const pointer to signal that it does not mutate the list,
    and it returns a non-const pointer so that client code can mutate
    the returned node if it needs to.
*/

// Return the nth node, or NULL if n >= length(list).
struct List *get_nth_node(const struct List *list, size_t n)
{
  int i = 0;
  while(list != NULL){
    if(i == n){
      return list;
    }
    list = list->next;
    i++;
  }
  return list;
}
