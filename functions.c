#include "main.h"

/*All functions add , sub, div and mul goes here*/

int add(int num_args, ...)
{
  int i;
  int total = 0;
  va_list args;

  va_start(args, num_args);

  for (i = 0; i < num_args; i++)
  {
    total += va_arg(args, int);
  }
  
  va_end(args);

  return total;
}

int subtract(int num_args, ...)
{
  int i;
  int total;
  va_list args;

  va_start(args, num_args);

  total = va_arg(args, int);

  for (i = 0; i < num_args; i++)
  {
    total -= va_arg(args, int);
  }
  
  va_end(args);

  return total;
}

int multiply(int num_args, ...)
{
  int i;
  int total = 1;
  va_list args;

  va_start(args, num_args);

  for (i = 0; i < num_args; i++)
  {
    total *= va_arg(args, int);
  }
  
  va_end(args);

  return total;
}

int division(int num_args, ...)
{
  int i;
  int total;
  va_list args;
  int divisor;

  total = va_arg(args, int);

  va_start(args, num_args);

  for (i = 1; i < num_args; i++)
  {
    divisor = va_arg(args, int);
    if (divisor != 0)
    {
      total /= divisor;
    }
    else
    {
      va_end(args);
      fprintf(stderr, "Division by 0 is not allowed");
    }
    
  }
  
  va_end(args);

  return total;
}