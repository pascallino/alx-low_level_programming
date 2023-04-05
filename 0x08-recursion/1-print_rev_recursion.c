#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints all string in reverse.
 * @s: The string to be printed. im the function
 */

void _print_rev_recursion(char *s)
{

if (*s)
		{
_putchar(*s);
_print_rev_recursion(s + 1);
	}
}
