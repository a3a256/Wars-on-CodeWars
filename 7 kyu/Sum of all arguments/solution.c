#include <stdarg.h>
/* The first parameter argc will indicate
 how many additional arguments were passed to the function.
 All arguments will be of type int
*/
int sum (int argc, ...)
{
  int counter, total = 0;
  va_list argptr;
  va_start (argptr, argc);
  for(counter = 0; counter < argc; counter++){
    total += va_arg(argptr, int);
  }
  return total;
}
