#include "main.h"
#include <stdarg.h> // This allows us to use variable numbers of arguments
/* MULTIPLICATION */

/* This function multiplies together all the numbers given to it */
int multiply(int howManyNumbers, ...)  
{
	va_list allNumbers; // This is a special kind of list that holds all the numbers
	int finalProduct =  1; // We start with  1 because anything multiplied by  1 stays the same
	int index;

	// Now we tell the computer where our list of numbers starts
	va_start(allNumbers, howManyNumbers);

	// Go through every number in the list one by one
	for (index =  0; index < howManyNumbers; index++) {
		// Take the next number from the list and multiply it with what we have so far
		finalProduct *= va_arg(allNumbers, int);
	}

	// After we're done with the list, we need to tell the computer to clean up
	va_end(allNumbers);

	// Give back the result of our multiplication
	return finalProduct;
}


/* DIVISION */
#include <stdio.h>
#include <stdarg.h>

/* This function divides all the numbers given to it */
double divide(int count, ...)  
{
	va_list numbers; // This is a special kind of list that holds all the numbers
	double result; // We will store the final result here
	int i;
	double nextValue; // This will hold the next number we want to divide by

	va_start(numbers, count); // Tell the computer where our list of numbers starts

	// Get the first number to start the division process
	result = va_arg(numbers, double);

	/* Loop through all the numbers starting from the second one */
	for (i =  1; i < count; i++)  
	{
		nextValue = va_arg(numbers, double); // Get the next number from the list

		// Check if we are trying to divide by zero
		if (nextValue !=  0) {
			result /= nextValue; // Divide the current result by this number
		} else {
			printf("Error: Division by zero is not allowed!\n"); // Show an error message
			va_end(numbers); // Clean up the list
			return  0.0; // Return zero because division by zero is undefined
		}
	}

	va_end(numbers); // Clean up the list after we're done
	return result; // Give back the result of our division
}

