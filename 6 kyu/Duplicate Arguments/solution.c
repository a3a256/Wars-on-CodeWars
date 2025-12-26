#include <stdbool.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

// All arguments will have type `const char *`
// They are all nul-terminated strings, except the last one which will be
// a null pointer used as a sentinel value to mark the end of the arguments.
bool has_duplicate_args(const char *arg1, ...) {
  if(arg1 == NULL){return false;}
  va_list args;
  va_start(args, arg1);
  
  const char* current_arg = va_arg(args, const char*);
  int i = 1, j;
  while(current_arg != NULL){
    if(strcmp(current_arg, arg1) == 0){;return true;}
    va_list args1;
    va_start(args1, arg1);
    const char* current_arg_j = va_arg(args1, const char*);
    j = 1;
    while(current_arg_j != NULL){
      if(i != j){
        if(strcmp(current_arg_j, current_arg) == 0){return true;}
      }
      current_arg_j = va_arg(args1, const char*);
      j++;
    }
    va_end(args1);
    current_arg = va_arg(args, const char*);
    i++;
  }
  va_end(args);
  return false;
}
