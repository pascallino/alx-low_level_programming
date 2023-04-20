#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers ending with a new line.
 * @sep: The seperator
 * @n: The number of arguments
 * @...: A variable arguments
 */

void print_numbers(const char *sep, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s%d", i == 0 ? "" : sep != NULL ? sep : "", va_arg(args, int));
		/* printf("%c", separator[j]);*/

	}
	va_end(args);
	printf("\n");
}
