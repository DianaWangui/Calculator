#include "main.h"

/*All functions add , sub, div and mul goes here*/

int add(int num_args, ...)
{
  int i;
  int result = 0;
  va_list args; /*stores our values*/

  va_start(args, num_args);

  for (i = 0; i < num_args; i++)
  {
    result += va_arg(args, int);
  }
  
  va_end(args);

  return result;
}

int subtract(int num_args, ...)
{
  int i;
  int result;
  va_list args;

  va_start(args, num_args);

  result = va_arg(args, int);

  for (i = 0; i < num_args; i++)
  {
    // printf("VALUES %d\n", i);
    result -= va_arg(args, int);
  }
  
  va_end(args);

  return result;
}

int multiply(int num_args, ...)
{
  int i;
  int result = 1;
  va_list args;

  va_start(args, num_args);

  for (i = 0; i < num_args; i++)
  {
    result *= va_arg(args, int);
  }
  
  va_end(args);

  return result;
}

int division(int num_args, ...)
{
  int i;
  int result;
  int divisor;
  va_list args;
  
  va_start(args, num_args);

  result = va_arg(args, int);

  for (i = 1; i <= num_args; i++)
  {
    divisor = va_arg(args, int);
    // printf(" divisor is %d\n", divisor);
    if (divisor != 0)
    {
      result /= divisor;
    }
    else
    {
      va_end(args);
      fprintf(stderr, "Division by 0 is not allowed");
    }
    
  }
  
  va_end(args);

  return result;
}