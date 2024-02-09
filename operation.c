#include "main.h"

/*This is the function prompt that allows user to make the choice
of the operator and enter the number they want to add*/

int operation(void)
{
  int choice;
  int values;
  int count = 0;
  int num;
   int result;

  printf("Enter your choice here: ")
  scanf("%d", &choice);

  switch(choice)
  {
    /*addition*/
    case 1:
      printf("Enter your numbers here, separated by space:");
      values = malloc((count + 1) * sizeof(int));
      values[count++] = num;
      count++;

      /*This will check if user enters more than 5 operations*/
      if (count > 5)
      {
        fprintf("Cannot take more than 5 values");
        return (1);
      }
      else 
      {
        /*This is from the function.c file*/
        result = add(count, num[1], num[2], num[3], num[4]);
      }

      /*subtraction*/
      case 2:
      printf("Enter your numbers here, separated by space:");
      values = malloc((count + 1) * sizeof(int));
      values[count++] = num;
      count++;

      /*This will check if user enters more than 5 operations*/
      if (count > 5)
      {
        fprintf("Cannot take more than 5 values");
        return (1);
      }
      else 
      {
        /*This is from the function.c file*/
        result = subtract(count, num[1], num[2], num[3], num[4]);
      }

      /*multiplication*/
      case 3:
      printf("Enter your numbers here, separated by space:");
      values = malloc((count + 1) * sizeof(int));
      values[count++] = num;
      count++;

      /*This will check if user enters more than 5 operations*/
      if (count > 5)
      {
        fprintf("Cannot take more than 5 values");
        return (1);
      }
      else 
      {
        /*This is from the function.c file*/
        result = add(count, num[1], num[2], num[3], num[4]);
      }

      /*Division*/
      case 4:
      printf("Enter your numbers here, separated by space:");
      values = malloc((count + 1) * sizeof(int));
      values[count++] = num;
      count++;

      /*This will check if user enters more than 5 operations*/
      if (count > 5)
      {
        fprintf("Cannot take more than 5 values");
        return (1);
      }
      else 
      {
        /*This is from the function.c file*/
        result = add(count, num[1], num[2], num[3], num[4]);
      }
  }
}