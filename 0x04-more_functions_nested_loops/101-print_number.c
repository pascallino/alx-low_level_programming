#include <stdio.h>
#include "main.h"

/**
 * my_putchar - returns the 9 times table
 * Description: var print
 * @var: varholds the last digit
 * Description2: last digit
*/

void my_putchar(int var)
{
	if (var < 0)
	{
	_putchar('-');
	var = var * -1;
	}
	if (var == 0)
	{
		_putchar('0');
	}
	if ((var / 10))
		my_putchar(var / 10);
	_putchar(var % 10 + '0');
}

/**
 * print_number - prints the numbers
 * Description: prints the 9 times table
 * @c: holds the number
 * Return: void
 */

void print_number(int c)
{
my_putchar(c);

}
