#include "main.h
int division(int count, ...)
{
	int i;
	int result;
	int divisor;
	va_list args;

	va_start(args, count);

	result = va_arg(args, int);

	for (i = 1; i <= count; i++)
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
