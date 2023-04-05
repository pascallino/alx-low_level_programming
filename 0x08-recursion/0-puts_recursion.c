#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * Description: recursive puts
 * @me: The string to be printed.
 */

void  _puts_recursion(char *me)
{

	if (*me)
	{
		_putchar(*me);

		_puts_recursion(me + 1);
	}
}
