#include "main.h"

/All functions add , sub, div and mul goes here/

int add(int count, ...)
{
  int i;
  int result = 0;
  va_list args; /stores our values/

  va_start(args, count);

  for (i = 0; i < count; i++)
  {
    result += va_arg(args, int);
  }
  
  va_end(args);

  return result;
}

