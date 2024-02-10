#include "main.h"

/*This is the function prompt that allows user to make the choice
of the operator and enter the number they want to add*/

int operation(void)
{
  int choice;
  int i;
  int count = 0;
  int num[5];
  int result;

  printf("Enter your choice here: ");
  scanf("%d", &choice);

  /*Switch statement to work on different */
  switch(choice)
  {
    /*addition*/
    case 1:
      printf("You chose addition.\n");
      printf("Enter your numbers here:");
      
      for (i = 0; i < 5; i++)
      {
        if (scanf("%d", &num[i]) != 1)
        {
          perror("Error taking your input");
          return (1);
        }
        count++;
      }

      /*This will check if user enters more than 5 operations*/
      if (count > 5)
      {
        fprintf(stderr, "Cannot take more than 5 values\n");
        return (1);
      }
      else 
      {
        /*This is from the function.c file*/
        result = add(count, num[0], num[1], num[2], num[3], num[4]);
        printf("%d\n", result);
      }
        break;

      /*subtraction*/
      case 2:
        printf("You chose subtraction.\n");
        printf("Enter your numbers here: ");
        for (i = 0; i < 5; i++)
        {
          if (scanf("%d", &num[i]) != 1)
          {
            perror("Error taking your input");
            return (1);
          }
          count++;
        }

        /*This will check if user enters more than 5 operations*/
        if (count > 5)
        {
          fprintf(stderr, "Cannot take more than 5 values\n");
          return (1);
        }
        else 
        {
          /*This is from the function.c file*/
          result = subtract(count, num[0], num[1], num[2], num[3], num[4]);
          printf("%d\n", result);
        }
          break;

      /*multiplication*/
      case 3:
        printf("You chose multiplication.\n");
        printf("Enter your numbers here: ");
        for (i = 0; i < 5; i++)
        {
          if (scanf("%d", &num[i]) != 1)
          {
            perror("Error taking your input");
            return (1);
          }
          count++;
        }

        /*This will check if user enters more than 5 operations*/
        if (count > 5)
        {
          fprintf(stderr, "Cannot take more than 5 values\n");
          return (1);
        }
        else 
        {
          /*This is from the function.c file*/
          result = multiply(count, num[0], num[1], num[2], num[3], num[4]);
          printf("%d\n", result);
        }
          break;

      /*Division*/
      case 4:
        printf("You chose division.\n");
        printf("Enter your numbers here:");
        for (i = 0; i < 5; i++)
        {
          if (scanf("%d", &num[i]) != 1)
          {
            perror("Error taking your input");
            return (1);
          }
          count++;
        }

        /*This will check if user enters more than 5 operations*/
        if (count > 5)
        {
          fprintf(stderr, "Cannot take more than 5 values\n");
          return (1);
        }
        else 
        {
          /*This is from the function.c file*/
          result = division(count, num[0], num[1], num[2], num[3], num[4]);
          printf("%d\n", result);
        }
          break;

        default:
          fprintf(stderr, "Invalid choice\n");
          return (1);

        return (0);
  }
}