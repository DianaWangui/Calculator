#include "main.h"

/All functions add , sub, div and mul goes here/


int subtract(int count, ...)
{
  int i;
  int result;
  va_list args;

  va_start(args, count);

  result = va_arg(args, int);

  for (i = 0; i < count; i++)
  {
    // printf("VALUES %d\n", i);
    result -= va_arg(args, int);
  }
  
  va_end(args);

  return result;
}
