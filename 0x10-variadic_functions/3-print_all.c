#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int num, i, sepind;
	va_list args;
	const char *str;
	int arg;
	char *s;
	double  argf;

	i = 0;
    va_start(args, format);
    str = format;
    while (str != NULL && *str)
    {
	    switch (*str)                        {
	    case 'i':
		    {
			    num = va_arg(args, int);
			    printf("%d", num);
			    sepind = 0;
			    break;
		    }
	    case 's':
		    {
	    s = va_arg(args, char *);
	    if (s == NULL)
		    s = "(nil)";

	    printf("%s", s);
	    sepind = 0;
	    break;
		    }
	    case 'c':
		    {
	    arg = va_arg(args, int);
	    printf("%c", arg);
	    sepind = 0;
	    break;
		    }
	    case 'f':
		    {
	    argf = va_arg(args, double);
	    printf("%f", argf);
	    sepind = 0;
	    break;
		    }
	    default:{
			    sepind = 1;
			    break;
		    }

    }
	    if (str[i + 1] != '\0' && sepind == 0)
	    {
		    printf(", ");
	    }
	    
str++;
i++;
    }
    va_end(args);
    printf("\n");
}
