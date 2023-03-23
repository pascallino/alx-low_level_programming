#include "main.h"

/**
 * print_triangle - Entry point
 * Description: checks is a character is uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

void print_triangle(int c)
{
	int size, i, j, k;
	size = c;

	if (!(c <= 0))
	{
		for (i = 1; i <= size; i++)
		{
			for ( j = 1; j <= size - i ; j++)
			{
				_putchar(' ');
			}
		for (k = 1; k <= i ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
