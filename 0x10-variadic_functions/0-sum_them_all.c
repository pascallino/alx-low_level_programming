#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of arguments
 * @n: The number of arguments passed
 * @...: A variable unknown arguments
 * Return: 0
 * therwise  - return the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	int i;
int m;

m = n;
	if (m == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(args, n);
	for (i = 0; i < m; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
