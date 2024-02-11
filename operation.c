#include "main.h"

/*This is the function prompt that allows user to make the choice
of the operator and enter the number they want to add*/

// int prompt_loop(void)
// {
//   printf("Enter '=' to calculate")
//   printf("Enter your numbers here: ")
//   while(count < 5 && scanf("%d", &num[count]) == 1)
//   {
//     count++;
//   }
// }

int operation(void)
{
  int choice;
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
      printf("Enter '=' after you are done.\n");
      printf("Enter numbers you want to add here: ");

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
        printf("Enter the numbers you want to multiply here:");

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
        scanf("%d", &result);
        printf("Enter the number(s) you want to divide with here:");

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
          result = division(count, result, num[0], num[1], num[2], num[3]);
          printf("Your result is: %d\n", result);
        }
          break;

        default:
          fprintf(stderr, "Invalid choice\n");
          return (1);
  }
}