#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints all, followed by a new line.
 * @format: A format specifier
 * @...: An unknown  variable arguments
 * Description: Any datatype not of type char, int, float char * is ignored.
 * If a string argument is NULL, print (nil).
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
