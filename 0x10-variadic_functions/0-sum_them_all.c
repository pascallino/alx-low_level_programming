#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  the sum of arguments
 * @n: The number of arguments passed
 * @...: A variable unknown arguments
 * Return: 0
 * therwise  - return the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	va_list args;
	unsigned int i;

va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
