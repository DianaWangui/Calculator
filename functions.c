#include 'main.h'
#include <stdarg.h>
/*All functions add , sub, div and mul goes here*/
#include <stdarg.h>

// Function to add a variable number of integers
int add(int num, ...) {
    int sum = 0;
    va_list args;

    // Initialize va_list to point to the first argument after 'num'
    va_start(args, num);

    // Loop through all the arguments and add them to the sum
    for (int i = 0; i < num; i++) {
        sum += va_arg(args, int);
    }

    // Clean up the va_list
    va_end(args);

    return sum;
}



  
