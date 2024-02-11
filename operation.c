#include "main.h"

/*This is the function prompt that allows user to make the choice
of the operator and enter the number they want to add*/

int operation(void)
{
  int choice;
  int count;
  int num[5];
  int result;
  int divisor;
  int cont;

  while (1)
  {
    count = 0;
    printf("\nEnter your choice here: ");
    scanf("%d", &choice);

    /*Switch statement to work on different */
    switch(choice)
    {
      /*addition*/
      case 1:
        printf("Enter '=' after you are done.\n");
        printf("Enter numbers you want to add here: ");

        while (count <= 5 && scanf("%d", &num[count]) == 1)
        {
          count++;
        }
        /*Checking when user enters only one value*/
        if (count < 2 && count > 0 )
        {
          fprintf(stderr, "You need to input two values\n");
          return (1);
        }
        if (count == 0)
        {
          fprintf(stderr, "You did not enter any value\n");
          return (1);
        }
        if (count > 6)
        {
          fprintf(stderr, "You are not allowed to enter more that 5 values\n");
          return (1);
        }
        
        else 
        {
          /*This is from the function.c file*/
          result = add(count, num[0], num[1], num[2], num[3], num[4]);
          printf("Your result is: %d\n", result);
        }
          break;

        /*subtraction*/
        case 2:
          printf("Enter '=' after you are done.\n");
          printf("Enter the number you want to subtract from: ");
          scanf("%d", &result);
          printf("Enter number(s) you want to subtract here: ");

          while (count <= 4 && scanf("%d", &num[count]) == 1)
          {
            count++;
          }
          if (count == 0)
          {
            fprintf(stderr, "You did not enter any value\n");
            return (1);
          }
          if (count > 4)
          {
            fprintf(stderr, "Can only take 4 inputs\n");
          }
          else 
          {
            /*This is from the function.c file*/
            // printf("COUNTED %d\n", count);
            result = subtract(count, result, num[0], num[1], num[2], num[3]);
            printf("Your result is: %d\n", result);
          }
            break;

        /*multiplication*/
        case 3:
          printf("Enter '=' after you are done.\n");
          printf("Enter the numbers you want to multiply here: ");

          while (count < 5 && scanf("%d", &num[count]) == 1)
          {
            count++;
          }
          if (count == 0)
          {
            fprintf(stderr, "You did not enter any value");
            return (1);
          }
          else 
          {
            /*This is from the function.c file*/
            result = multiply(count, num[0], num[1], num[2], num[3], num[4]);
            printf("Your result is: %d\n", result);
          }
            break;

        /*Division*/
        case 4:
          printf("Enter '=' after you are done.\n");
          printf("Enter the number you want to divide: ");
          scanf("%d", &divisor);
          printf("Enter the number(s) you want to divide with here: ");

          while (count <= 4 && scanf("%d", &num[count]) == 1)
          {
            count++;
          }
          if (count == 0)
          {
            fprintf(stderr, "You did not enter any value");
            return (1);
          }
          else 
          {
            /*This is from the function.c file*/
            // printf("%d", count);
            result = division(count, divisor, num[0], num[1], num[2], num[3]);
            printf("Your result is: %d\n", result);
          }
            break;

          default:
            fprintf(stderr, "Invalid choice\n");
            return (1);
    }
    printf("Do you want to continue 1/0? ");
    scanf("%d", &cont);
    printf("Test 1");
    if(cont == 0)
    {
      printf("Good bye\n");
      break;
    }
  }

  return (0);

  // (strcmp(cont, "y") == 0 || strcmp(cont, "Y") == 0);
}