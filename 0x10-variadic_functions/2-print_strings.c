#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - display strings with a new line \n
 * @sep: seperator
 * @n: The number of arguments
 * @...: A variable unknown arguments
 * Description: display strings in a specified format
 */

void print_strings(const char *sep, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "nil";
		}

		printf("%s%s", i == 0 ? "" : sep != NULL ? sep : "", str);

	}
	va_end(args);
	printf("\n");
}
