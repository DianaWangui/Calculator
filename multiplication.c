#include "main.h"
int multiply(int count, ...)
{
	int i;
	int result = 1;
	va_list args;

	va_start(args, count);

	for (i = 0; i < count; i++)
	{
		result *= va_arg(args, int);
	}

	va_end(args);

	return result;
}


