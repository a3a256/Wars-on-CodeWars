#include <stddef.h>

struct LinkedList {
    struct LinkedList *next;
    int value;
};

int *linked_list_to_array(const struct LinkedList *list, size_t *length) {
  struct LinkedList *itr = list;
  int len = 0;
  while(itr){
    len++;
    itr = itr->next;
  }
  int* res = (int*)malloc(sizeof(int)*len);
  int i = 0;
  while(list){
    res[i] = list->value;
    list = list->next;
    i++;
  }
  *length = len;
  return res;
}
