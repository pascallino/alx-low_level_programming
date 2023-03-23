#include "main.h"

/**
 * print_number - prints the numbers
 * Description: prints the 9 times table
 * @c: holds the number
 * Return: void
 */

void print_number(int c)
{

if (var < 0)
	{
	_putchar(45);
	c = c * -1;
	}
print_number(c / 10);
_putchar(c % 10 + '0');
}
